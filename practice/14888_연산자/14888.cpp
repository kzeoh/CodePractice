#include<iostream>
#include<vector>
//#include<limits>

using namespace std;

int N;
vector <int> num;
int op[4] = { 0, };
int maxv = -1e9;
int minv = 1e9;

void calc(int pos,int add, int sub, int mul, int div, int sumv) {
	if (pos >= N) {
		if (maxv < sumv)
			maxv = sumv;
		if(minv>sumv)
			minv = sumv;
		return;
	}
//	cout << "sumv" << sumv<<"\n";
	if (add) {
		calc(pos + 1, add - 1, sub, mul, div, sumv+num[pos]);
	}
	
	if (sub) {
		calc(pos + 1, add, sub-1, mul, div, sumv-num[pos]);
	}

	if (mul) {
		calc(pos + 1, add, sub, mul-1, div, sumv*num[pos]);
	}
	if (div) {
		calc(pos + 1, add, sub, mul, div-1, sumv/num[pos]);
	}
	return;
}

int main() {
	

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		num.push_back(temp);
	}

	for (int i = 0; i < 4; i++) {
		cin >> op[i];
	}
//	cout << maxv << "\n"<<minv<<"\n";
	
	calc(1, op[0],op[1],op[2],op[3],num[0]);

	cout << maxv << "\n"<<minv<<"\n";
	
	return 0;
}

#include <iostream>

using namespace std;
int maxnum=0;
//int result[16] = { 0, };
int input[2][16] = { 0, };
int N;

void solve(int day,int profit) {

	if (day == N + 1) {
//		cout<< profit <<"\n";
		if (maxnum < profit) {
			maxnum = profit;
		}
		return;
	}

	if (day > N+1) {
		return;
	}

	solve(day + input[0][day], profit + input[1][day]);
	solve(day + 1, profit);

	return;
}


int main() {

	int temp = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> input[0][i]>>input[1][i];
	}
//	cout << "start\n";
	solve(1,0);

	/*for (int i = 0; i < N; i++) {
		if (i > 0)
			temp = input[1][i] + result[i - 1];
		else
			temp = input[1][0];
		if ((input[0][i] - 1)+i >= N)
			continue;
		if (result[input[0][i] - 1+i]<temp) {
			result[input[0][i] - 1+i]=temp;
			//cout << temp <<" "<< input[0][i] - 1+i << "\n";
			if (maxnum < temp)
				maxnum = temp;
		}
		if(i>0)
		if (result[i] < result[i - 1])
			result[i] = result[i - 1];
	}*/

	cout << maxnum<<"\n";
//	cout << "done\n";

	return 0;
}

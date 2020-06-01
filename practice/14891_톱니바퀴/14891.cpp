#include<iostream>
#include<vector>
using namespace std;

vector <vector<int>> a(4,vector<int>());
int K;

void shift(int pos, int d) {
	if (d == 1) {
		int temp = a[pos][7];
		a[pos].pop_back();
		a[pos].insert(a[pos].begin(), temp);
	}else if (d == -1) {
		int temp = a[pos][0];
		a[pos].erase(a[pos].begin());
		a[pos].push_back(temp);
	}
}

void rotate(int pos, int d, int move) {
	if (move == 0) {
		int left = pos - 1;
		int right = pos + 1;

		if (left >= 0) {
			if (a[pos][6] != a[left][2]) {
				rotate(left, d * -1, 1);
			}
		}
		if (right < 4) {
			if (a[pos][2] != a[right][6]) {
				rotate(right, d * -1, 2);
			}
		}

		shift(pos,d);
		
	}
	else if (move == 1) {
		int left = pos - 1;

		if (left >= 0) {
			if (a[pos][6] != a[left][2]) {
				rotate(left, d * -1, 1);
			}
		}
		shift(pos, d);
	}else if (move == 2) {
		int right = pos + 1;

		if (right < 4) {
			if (a[pos][2] != a[right][6]) {
				rotate(right, d * -1, 2);
			}
		}

		shift(pos, d);

	}

}

int main() {
	char temp;
	int num;
	int answer = 0;
	int score[4] = { 1,2,4,8 };


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> temp;
			num = atoi(&temp);
			a[i].push_back(num);
		}
	}
	
/*	for (int i = 0; i < 4; i++) {
		for (int j = 0;j< a[i].size(); j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}*/

	cin >> K;

	for (int i = 0; i < K; i++) {
		int pos, d;
		cin >> pos >> d;

		rotate(pos-1, d,0);
	/*	cout << i<<"round\n";
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < a[i].size(); j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}*/
	}

	for (int i = 0; i < 4; i++) {
		if (a[i][0]) {
			answer += score[i];
		}
	}

	cout << answer << "\n";

	return 0;
}

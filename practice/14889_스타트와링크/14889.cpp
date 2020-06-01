#include<iostream>

using namespace std;

int N;
int map[20][20] = { 0, };
int answer = 1e9;
bool team[20] = { 0, };

void solve(int n, int idx) {
	if (n == N / 2) {
		int x=0, y=0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == j)
					continue;
				if (team[i]&&team[j]) {
					x += map[i][j];
				}else if(!team[i]&&!team[j]) {
					y += map[i][j];
				}
			}
		}
		int temp = x - y;
		if (temp < 0)
			temp *= -1;
		if (temp < answer)
			answer = temp;
		return;
	}

	if (idx >= N)
		return;

	team[idx] = 1;
	solve(n + 1,idx+1);
	team[idx] = 0;
	solve(n, idx + 1);

	return;
}

int main() {


	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	solve(0,0);

	cout << answer<<"\n";

	return 0;
}

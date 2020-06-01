#include<iostream>

using namespace std;

int N, L;
int map[100][100];
int answer = 0;

void solve() {
	int route = 0;
	int routenum = 0;
	for (int i = 0; i < N; i++) {
//		cout << "i: "<< i<<" ";
		for (int j = 0; j < N; j++) {
			if (j == 0) {
				route = 1;
				continue;
			}
			if (map[i][j] != map[i][j-1]) {
				if (map[i][j] - map[i][j - 1] == 1) {
					if (route < L)
						break;
					route = 0;
				}
				else if (map[i][j] - map[i][j - 1] == -1) {
					if (route < 0)
						break;
					route = -L;
				}else
					break;
			}
			route++;
			if (j == N - 1&&route>=0)
				answer++;
		}
//		cout << answer << "\n";
	}
	for (int j = 0; j < N; j++) {
//		cout << "j: "<<j<<" ";
		for (int i = 0; i < N; i++) {
			if (i == 0) {
				route = 1;
				continue;
			}
			if (map[i][j] != map[i-1][j]) {
				if (map[i][j] - map[i-1][j] == 1) {
					if (route < L)
						break;
					route = 0;
				}
				else if (map[i][j] - map[i-1][j] == -1) {
					if (route < 0)
						break;
					route = -L;
				}else
					break;
			}
			route++;
			if (i == N - 1 && route >= 0)
				answer++;
		}
//		cout << answer << "\n";
	}

}

int main() {

	cin >> N >> L;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	solve();

	cout << answer<<"\n";

	return 0;
}

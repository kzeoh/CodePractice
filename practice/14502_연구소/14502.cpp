#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int N, M;
int map[8][8];
bool temp[8][8];
int virus=1e9;
vector <pair<int, int>> v;
vector <pair<int, int>>::iterator it;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int dfs(int x, int y) {
	int ret = 1;
	temp[x][y] = true;
	for (int i = 0; i < 4; i++) {
		if (x+dx[i]<0||x+dx[i]>=N||y+dy[i]<0||y+dy[i]>=M) {
			continue;
		}
		if (temp[x+dx[i]][y+dy[i]] || map[x+dx[i]][y+dy[i]])
			continue;
		ret+=dfs(x + dx[i], y + dy[i]);
	}

//	cout<<"ret: " <<x << y <<"\n";
	return ret;
}

void fill(int n, int m,int wall) {


	if (wall == 3) {
		int tmp = 0;
		memset(temp,0,sizeof(temp));
		for (it = v.begin(); it != v.end();it++) {
			tmp+=dfs(it->first, it->second);
//			cout << "calc:"<< tmp<<"\n";
		}
		if (virus > tmp) {
			virus = tmp;
//			cout << "tmp:"<<tmp << "\n";
		}
		return;

	}

	for (int i = n; i < N; i++) {
		int k = i == n ? m:0;
/*		if (i != n) {
			m = 0;
		}*/
		for (int j = k; j < M; j++) {
			if (map[i][j] == 0) {
				map[i][j] = 1;
//				cout <<"i and j: "<<i<<" "<< j << "\n";
				fill(i, j + 1, wall + 1);
				map[i][j] = 0;
			}
			
		}
	}

	return;
}

int main() {
	int safe = -3;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
//				cout<< "virus:" << i << j<< "\n";
				v.push_back({ i,j });
			}
			if (map[i][j] != 1) {
				safe++;
			}

		}

	}

	fill(0,0,0);
//	cout <<safe<<"\n";
	cout << safe - virus << "\n";

	return 0;
}


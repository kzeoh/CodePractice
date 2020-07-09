#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int map[102][102];
int movex[4] = { 0,1,0,-1 };
int movey[4] = { 1,0,-1,0 };
queue <int> q;

int main() {
	int T = 0;
	cin >> T;

	for (int t = 1; t <= 10; t++) {
		cout << "#" << t << " ";

		int n;
		int x, dx;
		int y, dy;
		int num;
		int dis;
		int dist[102][102]={{0,}};

		cin >> n;

		std:fill_n(dist[0],102*102,0);
		fill_n(map[0],102*102,0);

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				scanf("%1d",&map[i][j]);
				dist[i][j] = 1e9;
			}
		}

		q.push(1001);
		dist[1][1] = 0;
		while (!q.empty()) {
			num = q.front();
			q.pop();
			x = num / 1000;
			y = num % 1000;
			for (int i = 0; i < 4; i++) {
				dx = x + movex[i];
				dy = y + movey[i];
				dis = dist[x][y] + map[dx][dy];
//				cout<<dx<<" "<<dy<<" "<<dis<<" "<<dist[x][y]<<" "<<map[dx][dy]<<"\n";
				if (dist[dx][dy] > dis) {
					//cout<<dx<<" "<<dy<<" "<<dis<<"\n";
					q.push(1000 * dx + dy);
					dist[dx][dy] = dis;
				}
			}

		}
		cout << dist[n][n] << "\n";


	}

	return 0;
}

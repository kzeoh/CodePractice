#include<iostream>
#include<cstring>

using namespace std;

int N, M;
int map[50][50] = { 0, };
bool fin[50][50];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0, 1,0,-1 };
int answer = 0;

void clean(int x, int y, int d) {
	
	int flag = 0;

//	cout << "start\n";

	while (true) {
		int md = d;
		flag=0;	
//		cout << "x,y:"<<x << y<<" "<<md<<"\n";
		for (int i = 0; i < 4; i++) {
			md = (md + 3) % 4;
			int nx = x + dx[md];
			int ny = y + dy[md];

			if (nx < 0 || ny<0 || nx >= N || ny >= M) {
				continue;
			}

			if (!fin[nx][ny]&& !map[nx][ny]) {
				x = nx;
				y = ny;
				fin[x][y] = 1;
				answer++;
				d=md;
				flag=1;
				break;
			}
				
		}
//		cout << d<< ": "<<map[x+dx[(d+2)%4]][y+dy[(d + 2) % 4]]<<"\n";
		if (map[x-dx[d]][y-dy[d]]!=1&&!flag) {
			x = x-dx[d];
			y = y-dy[d];
			flag = 0;
			continue;
		}else if (map[x-dx[d]][y-dy[d]] == 1 &&!flag){
			return;
		}

		
	}
		
	return;
}

int	main() {
		
	int x, y;
	int d;

	cin >> N >> M;
	cin >> x >> y >> d;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	memset(fin, 0, sizeof(fin));
	fin[x][y] = 1;
	answer++;
//	cout << x<<" "<<y<<"\n";
	clean(x, y, d);


	cout<< answer<<"\n";
	return 0;
}

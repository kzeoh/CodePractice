#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int N, M;
int map[10][10];
int cover[10][10];
vector <pair<int, int>> cam;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int U = 1, R = 1 << 1, D = 1 << 2, L = 1 << 3;
int maxc = 1e9;


vector <int> direct[6] = { {},
    {U, R, D, L}, 
    {U | D, R | L}, 
    {U | R, R | D, D | L, L | U},   
    {L | U | R, U | R | D, R | D | L, D | L | U}, 
    {U | R | D | L} };  

void turn(int x, int y, int pos, int on) {
    //cout << x << y << on<<"\n";
    for (int i = 0; i < 4; i++) {
        if (pos & (1 << i)) {
            int nx = x, ny = y;
            //cout << i << "\n";
            while (map[nx][ny] != 6) {
                cover[nx][ny] += on;
                nx += dx[i];
                ny += dy[i];
                //cout << nx << ny << "\n";
            }
        }
    }

    return;
}

void solve(int n) {
    if (n == cam.size()) {
        int count = 0;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                if (cover[i][j] == 0)
                    count++;
            }
        }
        if (count < maxc) {
            maxc = count;
           /* for (int i = 1; i <= N; i++) {
                for (int j = 1; j <= M; j++) {
                    cout << cover[i][j];
                }
                cout << "\n";
            }
            cout << "\n";*/
        }
        return;
    }

    int x = cam[n].first, y = cam[n].second;
    for (auto i : direct[map[x][y]]) {
        //cout << x << " " << y << " " << i << "\n";
        turn(x, y, i, 1);
        solve(n + 1);
        turn(x, y, i, -1);
    }
    return;
}

int main() {
    int temp;
    int safe = 0;
    int idx = 0;

    cin >> N >> M;

    //memset(map,6,sizeof(map));
    //cout << "map" << map[0][3] << "\n";
    for (int i = 0; i <= N + 1; i++)
    {
        for (int j = 0; j <= M + 1; j++)
        {
            if (i == 0 || j == 0 || i == N + 1 || j == M + 1) {
                map[i][j] = 6;
                continue;
            }
            cin >> temp;
            map[i][j] = temp;
            if (temp > 0 && temp < 6) {
                cam.push_back({ i,j });
            }

            if (temp != 6) {
                safe++;
            }
        }
    }

    memcpy(cover, map, sizeof(map));
    //cout << "map" << map[0][3] << "\n";
    solve(0);

    cout << maxc << "\n";

    return 0;
}

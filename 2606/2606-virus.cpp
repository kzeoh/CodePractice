#include <iostream>

using namespace std;

int map[101][101];
int visit[101];
int n, cnt;

int main(){

	int con;
	int u, v;
	cin >> n;
	cin >> con;

	for(int i=0; i < con; i++){
		cin >> u >> v;
		map[u][v] = map[v][u] = 1;

	}
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			cout <<	map[i][j];
		}

	}



}

#include <iostream>

using namespace std;

int map[101][101];
int visit[101];
int n, cnt;

void dfs(int node){
	visit[node]=1;
	for (int i =1; i <=n; i++){
		if(!visit[i]&& map[node][i]==1){
//			cout<<node<<' ' <<i<<'\n';
			cnt++;
			dfs(i);
		}
	}

}


int main(){

	int con;
	int u, v;
	cin >> n;
	cin >> con;

	for(int i=0; i < con; i++){
		cin >> u >> v;
		map[u][v] = map[v][u] = 1;

	}


	/*printing array*/
/*	for(int i=1; i <= n; i++){
		for(int j=1; j <= n; j++){
			cout <<	map[i][j];
		}
		cout << '\n';

	}*/
//	cout<< '\n';

	dfs(1);
	cout << cnt <<'\n';


}

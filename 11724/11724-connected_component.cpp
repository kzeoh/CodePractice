#include <iostream>

using namespace std;
int map[7][7];
int visit[7];
int n,m,cnt;

void dfs(int node){
	
	for(int i=1;i<=n;i++){
		if(map[node][i]==1&&visit[i]==0){
			visit[i]=1;
//			cout<<node<<i<<'\n';
			dfs(i);
		}
		
	}

}

int main(){
	int u,v;

	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		map[u][v]=map[v][u]=1;
	}

/*	for(int i=1;i<=n;i++){
		for(int j=1; j <= n; j++){
			cout <<	map[i][j];
		}
		cout << '\n';
	}
	cout<< '\n';*/
	
	for(int i=1;i<=n;i++){
		if(visit[i]==0){
			dfs(i);
			cnt++;
//			cout<<i<<'\n';
		}
	}

	cout<<cnt<<'\n';	

	return 0;
}

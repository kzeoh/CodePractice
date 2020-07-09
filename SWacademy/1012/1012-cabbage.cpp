#include <iostream>

using namespace std;

int map[50][50];
int visited[50][50];
int M, N, K, X, Y;

int dfs(int dx, int dy){
	int ret;

	if(map[i+1][j]==1){
		

	}else(map[i][j+1]==1){

	}
		visited[i][j]=1;
		dfs(i,j);

	return ret;
}


int main(){
	
	int T;
	int ret;
	int cnt;

	cin >> T;
	for(int j=0; j<T;j++){
		cin >> M >> N >> K;

		for(int i=0;i<K;i++){
			cin	>> X, Y;
			map[X][Y]=1;
		}
		for(int i=0;i<M-1;i++){
			for(int k=0;i<N-1;k++){
				if(map[i][k]==1&&visited[i][k]==0){
					ret=dfs(i,k);
					if(ret)
						cnt++;			
				}
			}
		}
	}



	return 0;
}

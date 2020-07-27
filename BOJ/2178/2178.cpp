#include <iostream>

using namespace std;

int arr[101][101]={0,};
int visited[101][101]={0,};
int coord[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

int answer=1e9;
int N, M;


void solve(int n, int m, int step){
	if(n==N&&m==M){
		if(step<answer){
			answer=step;
		}
		return;
	}
	
//	cout<<n<<" "<<m<<"\n";
	for(int i=0;i<4;i++){
		int moveN = n+coord[i][0];
		int moveM = m+coord[i][1];
//		cout<<moveN<<moveM<<arr[moveN][moveM]<<"\n";
		if(moveN<1||moveN>100||moveM<1||moveM>100){
			continue;
		}
		if((visited[moveN][moveM]>step||visited[moveN][moveM]==0)&&arr[moveN][moveM]==1){
			visited[moveN][moveM]=step+1;
//			cout<<moveN<<" "<<moveM<<"\n";
			solve(moveN,moveM,step+1);
			visited[moveN][moveM]=step;

		}				
	}

}

int main (){

	cin >> N >> M;

	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			char temp;
			cin >> temp;
			arr[i][j]=temp-'0';
		}
	}

	visited[1][1]=1;
	solve(1,1,1);

	cout<< answer <<"\n";

	return 0;
}

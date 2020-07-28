#include <iostream>

using namespace std;

int arr[16][16];
int dp[16][16];
int N, M, K;

int answer=0;


int main(){


	cin >> N >> M >> K;

	int k=1;
	int targetN, targetM;
	
	dp[0][1]=1;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			arr[i][j]=k++;
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
			if(arr[i][j]==K){
				targetN=i;
				targetM=j;
			}		
		}
	}

	int nextN=N-targetN+1;
	int nextM=M-targetM+1;

	answer= dp[targetN][targetM]*dp[nextN][nextM];


	cout << answer<<"\n";
	return 0;
}

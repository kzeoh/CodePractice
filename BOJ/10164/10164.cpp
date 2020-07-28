#include <iostream>

using namespace std;

int arr[16][16];
int visited[16][16];
int N, M, K;

int dir[2][2]={{1,0},{0,1}};

int answer=0;

void solve(int num, int n, int m, bool pass){

//	cout << num<<"\n";
	if(num==N*M&&pass){
		answer++;
		return;	
	}

	if(num== K)
		pass=1;

	for(int i=0;i<2;i++){
		int nextn = n+dir[i][0];
		int nextm = m+dir[i][1];
		if(nextn<0||nextn>=N||nextm<0||nextm>=M){
			continue;
		}

		if(!visited[nextn][nextm]){
			visited[nextn][nextm]=1;
			solve(arr[nextn][nextm],nextn,nextm,pass);
			visited[nextn][nextm]=0;
		}
	}

}

int main(){


	cin >> N >> M >> K;

	int k=1;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			arr[i][j]=k++;
//			cout << arr[i][j]<< " ";
		}
//		cout<<"\n";
	}
	if(!K)
		solve(arr[0][0],0,0,1);
	else
		solve(arr[0][0],0,0,0);
	cout << answer<<"\n";
	return 0;
}

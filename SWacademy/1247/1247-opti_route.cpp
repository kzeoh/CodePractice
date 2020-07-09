#include <iostream>
#include <algorithm>
//#include<cstdlib>

using namespace std;

int minV=1e9;
int n=0;
int a[2][13];
int visited[13];

int calc(int prev, int idx){
	int ret=0;
	int dx=0,dy=0;
	
	dx=a[0][prev]-a[0][idx];
	dy=a[1][prev]-a[1][idx];

	ret=abs(dx)+abs(dy);
//	printf("a[0][%d]: %d a[0][%d]: %d dx:%d dy:%d ret: %d\n",prev,a[0][prev],idx, a[0][idx],dx,dy,ret);

	return ret;
}


int dfs(int prev, int idx, int dist,int cnt){
//	printf("prev:%d idx:%d cnt:%d\n",prev,idx,cnt);
	if(dist>minV)
		return 0;
	if(cnt==n){
		dist+=calc(prev,idx);
		dist+=calc(idx,n+1);
		if(minV>dist)
			minV=dist;
//		cout<<"dist: "<<dist<<"\n";
//		printf("\n");
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			visited[i]=1;
//			printf("a[0][%d]: %d a[0][%d]: %d\n",prev,a[0][prev],idx, a[0][idx]);
//			printf("%d ",i);
			dist+=calc(prev,idx);
			dfs(idx,i,dist,cnt+1);
			dist-=calc(prev,idx);
			visited[i]=0;
		}
	}

	

	return 0;
}

int main(){
	int T;
	cin >> T;

	for(int t=1;t<=10;t++){
		cout<<"#"<<t<<" ";
		cin >>n;
		cin >> a[0][0]>> a[1][0]>>a[0][n+1]>>a[1][n+1];
		for(int i=1;i<=n;i++){
			cin >> a[0][i] >>a[1][i];
//			cout << "input"<<i<<": "<<a[0][i]<<" "<<a[1][i]<<"\n";
		}
		for(int i=1;i<=n;i++){
			visited[i]=1;
			dfs(0,i,0,1);
			visited[i]=0;
		}

		cout<< minV<<"\n";
		minV=1e9;
		std:fill_n(a[0],2*13,0);
		fill_n(visited,13,0);

	}


}

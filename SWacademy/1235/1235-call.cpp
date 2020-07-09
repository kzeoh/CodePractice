#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
	queue<int> q;
	
	for(int t=1;t<=10;t++){
		int a[101][101]={{0,},{0,}};
		int visited[101][2]={{0,},{0,}};
		
		int N, M;
		int from, to;
		int max=0;
		int level=0;

		cin >> N>> M;
//		cout<< M<<"\n";
		for(int i=0;i<N/2;i++){
			cin >> from >>to;
//			cout << from <<" "<< to<<"\n";
			a[from][to]=1;
		}
		q.push(M);
		visited[M][1]=1;
		while(!q.empty()){
			M=q.front();
			q.pop();
			
			for(int i=0;i<101;i++){
//				cout<<a[M][i]<<" "<<M<<" "<<i<<"\n";
				if(a[M][i]==1&&visited[i][0]==0){
					q.push(i);
					visited[i][0]=1;
					level=visited[i][1]=visited[M][1]+1;
		
//					cout<< i<<"\n";
				}
			}
		}
		for(int i=0;i<101;i++){
			if(visited[i][1]==level&&max<i)
				max=i;
		}

		cout<<"#"<<t<<" "<<max<<"\n";

	}

	return 0;
}

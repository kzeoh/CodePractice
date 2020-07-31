#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int r,c,k;
int arr[101][101];
int num[101];
int row, col;


int solve(){
	if(arr[r][c]==k){
		return 0;
	}

	int cnt=0;

	while(1){
		if(arr[r][c]==k){
			return cnt;
		}
		if(cnt>100){
			return -1;
		}
		if(col>=row){
			vector <pair<int,int>> v;
			int rowmax=0;
			for(int i=1;i<=col;i++){
				for(int j=1;j<=row;j++){
					num[arr[i][j]]++;
				}
				for(int j=1;j<=100;j++){
					if(num[j])
						v.push_back({num[j],j});
					else
						continue;
				}
				sort(v.begin(),v.end());
				for(int j=1;j<=row;j++){
					arr[i][j]=0;
				}
				int idx=1;
				for(int j=0;j<v.size();j++){
					arr[i][idx++]=v[j].second;
					arr[i][idx++]=v[j].first;
				}
				idx-=1;
				if(rowmax<idx){
					rowmax=idx;
				}
				v.clear();
				memset(num,0,sizeof(num));

			}
			row=rowmax;



		}else{
			vector <pair<int,int>> v;
			int colmax=0;
			for(int i=1;i<=row;i++){
				for(int j=1;j<=col;j++){
					num[arr[j][i]]++;
				}
				for(int j=1;j<=100;j++){
					if(num[j])
						v.push_back({num[j],j});
					else
						continue;
				}
				sort(v.begin(),v.end());
				for(int j=1;j<=col;j++){
					arr[j][i]=0;
				}
				int idx=1;
				for(int j=0;j<v.size();j++){
					arr[idx++][i]=v[j].second;
					arr[idx++][i]=v[j].first;
				}
				idx-=1;
				if(colmax<idx){
					colmax=idx;
				}
				v.clear();
				memset(num,0,sizeof(num));

			}
			col=colmax;
		}
/*		if(cnt<5){
		for(int i=1;i<=col;i++){
			for(int j=1;j<=row;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";}*/
		cnt++;
	}
}

int main(){
	
	cin >> r >> c >> k;
	
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cin >> arr[i][j];
		}
	}

	row=3;col=3;
/*	for(int i=1;i<=col;i++){
		for(int j=1;j<=row;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}*/

	int answer = solve();

	cout<<answer<<"\n";
	
	return 0;
}

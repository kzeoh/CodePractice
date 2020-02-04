#include <iostream>
#include <algorithm>

using namespace std;
char map[16][16];
int visited[16][16];
int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};
int poss=0;

int dfs(int r, int c){
	int mr, mc;	
	int ret=0;

	if(poss)
		return 1;

	visited[r][c]=1;
//	cout<<r<<c<<"\n";
	
	if(map[r][c]=='3'){
		poss=1;
		return 1;
	}

	for(int i=0;i<4;i++){
		mr=r+dr[i];
		mc=c+dc[i];
//		cout<<map[mr][mc]<<mr<<mc<<"\n";
		if(mr<16&&mc<16&&visited[mr][mc]==0&&(map[mr][mc]=='0'||map[mr][mc]=='3'))
			ret=dfs(mr,mc);
		if(poss)
			return 1;
	}
	

}


int main(){
	
	for(int t=1; t<=10;t++){
		int ret;
		int n;
		cin >> n;	
		for(int i=0;i<16;i++){
			cin >> map[i];
		}
		
		ret=dfs(1,1);
		cout << "#"<<t<<" "<<poss <<"\n"; 
		poss=0;
		std:fill_n(visited[0],16*16,0);
	}
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){

	int n;
	int Rcnt =0, Bcnt=0;
	int idx=0;
	int cnt=0;
	int minCnt=2e9;
	string s;

	cin >> n >> s;

	for(int i=0; i<n;i++){
		if(s.at(i)=='R')
			Rcnt++;
		else
			Bcnt++;
	}

	while(s.at(idx)=='R'){
		cnt++;
		idx++;
		if(idx==n)
			break;
	}
	
	minCnt=Rcnt-cnt;
	idx=n-1;
	cnt=0;
	while(s.at(idx)=='R'){
		cnt++;
		idx--;
		if(idx==-1)
			break;
	}
	minCnt=min(minCnt,Rcnt-cnt);
	cnt=0;
	idx=0;
	while(s.at(idx)=='B'){
		cnt++;
		idx++;
		if(idx==n)
			break;
	}
	
	minCnt=min(minCnt,Bcnt-cnt);
	idx=n-1;
	cnt=0;
	while(s.at(idx)=='B'){
		cnt++;
		idx--;
		if(idx==-1)
			break;
	}
	minCnt=min(minCnt,Bcnt-cnt);

	cout << minCnt<<"\n";
		
	return 0;
}

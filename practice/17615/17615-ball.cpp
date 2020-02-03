#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n;
	int Rcnt =0, Bcnt=0;
	int minCnt=2e9;
	int flag=0;
	vector <char> red, blue;
	char c,temp;
	string s;

	cin >> n >> s;
	cout << n << s << "\n";
	c=s.at(0);
	
	for(int i=1; i < n; i++){
		temp=s.at(i);
		if(c!=temp){
			if(flag){
				flag=0;
				if(c=='R')
					Rcnt++;
				else
					Bcnt++;
			}else{
				if(c=='R')
					Rcnt++;
				else
					Bcnt++;
					
			}
			continue;
		}
		if(c==temp){
			if(!flag)
				flag=1;
			continue;
		}
	}
	cout << Rcnt << Bcnt << "\n";	
	minCnt=min(Rcnt,Bcnt);	

	c=s.at(n-1);
	flag=0;
	Rcnt=0;
	Bcnt=0;
	for(int i=n-2; i >=0; i--){
		temp=s.at(i);
		if(c!=temp){
			if(flag){
				flag=0;
				if(c=='R')
					Rcnt++;
				else
					Bcnt++;
			}
			continue;
		}
		if(c==temp){
			if(!flag)
				flag=1;
			continue;
		}
	}
	
	if(minCnt<min(Rcnt,Bcnt))
		minCnt=min(Rcnt,Bcnt);
	cout << Rcnt << Bcnt << "\n";	

	cout << minCnt;
		
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){

	int n;
	int Rcnt =0, Bcnt=0;
	int minCnt=2e9, minCnt2=2e9;
	int flag=0;
	vector <char> red, blue;
	char c,temp;
	string s;

	cin >> n >> s;
//	cout << n << s << "\n";
	c=s.at(0);
	if(c!=s.at(1)&&c=='R'){
		flag=1;
	}else if(c==s.at(1)&&c=='B'){
		flag=1;
	}else if(c=='B'&&s.at(1)=='R'){
		flag=1;
		Rcnt++;
	}

	for(int i=2;i<n;i++){
		temp=s.at(i);
		if(temp=='R'&&flag){
			Rcnt++;
		}else if(temp=='B'&&!flag){
			flag=1;
		}
	}
	flag=0;
	if(c!=s.at(1)&&c=='B'){
		flag=1;
	}else if(c==s.at(1)&&c=='R'){
		flag=1;
	}else if(c=='R'&&s.at(1)=='B'){
		flag=1;
		Bcnt++;
	}


	for(int i=2;i<n;i++){
		temp=s.at(i);
		if(temp=='B'&&flag){
			Bcnt++;
		}else if(temp=='R'&&!flag){
			flag=1;
		}
	}
	
//	cout << Rcnt << Bcnt << "\n";	
	minCnt=min(Rcnt,Bcnt);	
	Rcnt =0;
	Bcnt =0;
	flag=0;
	c=s.at(n-1);
//	cout<<c<<"\n";
	if(c!=s.at(n-2)&&c=='R'){
		flag=1;
	}else if(c==s.at(n-2)&&c=='B'){
		flag=1;
	}else if(c=='B'&&s.at(n-2)=='R'){
		flag=1;
		Rcnt++;
	}
//	cout<< Rcnt <<" "<<flag<< "\n";
	for(int i=n-3;i>=0;i--){
		temp=s.at(i);
		if(temp=='R'&&flag){
			Rcnt++;
		}else if(temp=='B'&&!flag){
			flag=1;
		}
	}
//	cout<< Rcnt <<"\n";
	flag=0;
	if(c!=s.at(n-1)&&c=='B'){
		flag=1;
	}else if(c==s.at(n-2)&&c=='R'){
		flag=1;
	}else if(c=='R'&&s.at(1)=='B'){
		flag=1;
		Bcnt++;
	}


	for(int i=n-3;i>=0;i--){
		temp=s.at(i);
		if(temp=='B'&&flag){
			Bcnt++;
		}else if(temp=='R'&&!flag){
			flag=1;
		}
	}
	
//	cout << Rcnt << Bcnt << "\n";	
	minCnt2=min(Rcnt,Bcnt);	

	minCnt=min(minCnt,minCnt2);
	
	

	cout << minCnt<<"\n";
		
	return 0;
}

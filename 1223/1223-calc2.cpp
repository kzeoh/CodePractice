#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main(){

	
	for(int T=1;T<=10;T++){
	
		int n=0;
		stack <char> stk;
		stack <int> stki;
		string s;
		string s2;
		int ret=0;

		cin >>n;

		cin >> s;

		for(int i=0;i<n;i++){
			char c2;
			char c=s[i];
			if(c=='+'){
				if(!stk.empty()){
					if(stk.top()=='*'){
						while(!stk.empty()){
							c2=stk.top();
							stk.pop();
							s2.push_back(c2);
						}
						stk.push(c);
					}else{
						c2=stk.top();
						stk.pop();
						s2.push_back(c2);
						stk.push(c);
					}
				}else
					stk.push(c);
			}else if(c=='*'){
				if(!stk.empty()){
					if(stk.top()!='+'){
						c2=stk.top();
						stk.pop();
						s2.push_back(c2);
					}
					stk.push(c);
				}	
				else
					stk.push(c);
			}
			else
				s2.push_back(s[i]);
			
			
		}
		while(!stk.empty()){
			s2.push_back(stk.top());
			stk.pop();
			
		}
		
//		cout<<s2<<"\n";
		
		for(int i =0; i<n; i++){
			if(s2[i]=='+'||s2[i]=='*'){
				int num1=stki.top();
				stki.pop();
				int num2=stki.top();
				stki.pop();
				if(s2[i]=='+')
					stki.push(num1+num2);
				else
					stki.push(num1*num2);
//				cout<<stki.top();
			}else{
				int num = s2[i]-'0';
				stki.push(num);
			}
		}
		ret=stki.top();
	cout << "#"<<T<<" "<< ret <<"\n";
	}

	return 0;
}

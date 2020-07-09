#include<iostream>
#include<algorithm>
#include<stack> 

using namespace std;


int main(int argc, char** argv)
{
    int test_case;
    int T;
    
	for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
		int m;
		int temp;
		int ret=0;
		char a[1000]={0,};
		stack<char> s;
//		string str1;
//		string str2;
		
        cin>>n;
//      cout<<n;

//		std:fill_n(b,202,0);
		cin >>a;
//		cout<<a;
		for(int i=0; i< n; i++){
			if(a[i]=='('||a[i]=='['||a[i]=='{'||a[i]=='<')
				s.push(a[i]);
			else if(a[i]==')'&&s.top()=='('){
				s.pop();
			}else if(a[i]==']'&&s.top()=='['){
				s.pop();
			}else if(a[i]=='}'&&s.top()=='{'){
				s.pop();
			}else if(a[i]=='>'&&s.top()=='<'){
				s.pop();
			}else
				break;
		}
		if(s.empty())
			ret=1;
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

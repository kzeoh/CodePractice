#include<iostream>
#include<algorithm>
#include<stack> 
#include<string>

using namespace std;

int a[100];
int b[100];

int dfs(int node){
	int ret=0;
	//cout << node << "\n";	
	if(a[node]==99||b[node]==99){
		return 1;
	}else if(a[node]!=99||b[node]!=99){
		if(a[node]>0){
			ret=dfs(a[node]);
		}
		if(b[node]>0&&ret!=1)
			ret=dfs(b[node]);
	}
	return ret;
}

int main(int argc, char** argv)
{
    int test_case;
    int T;
    
	for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
		int m;
		int j;
		int l;
		int temp;
		int ret=0;
	//	stack<char> s;
//		string str1;
//		string str2;
		
        cin>>n >> m;
//      cout<<n << m << "\n";

		std:fill_n(a,100,0);
		fill_n(b,100,0);
//		memset(a,0,sizeof(a));
//		cin >>a;
//		cout<<a;
		for(int i=0; i< m; i++){
			cin >> j >> l;
//			cout << j <<" "<< l << "\n";
			if(a[j]==0)
				a[j]=l;
			else
				b[j]=l;
		}
	
		ret=dfs(0);
		
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

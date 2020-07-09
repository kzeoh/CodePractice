#include<iostream>
#include<algorithm>
#include<stack> 
#include<string>

using namespace std;

int a[100][100];

int dfs(int node){
	int ret=0;

	for(int i=0; i < 100; i++){
		if(a[node][i]==1){
			if(i==99)
				return 1;
//			cout<<i<<"\n";
			ret=dfs(i);
			if(ret==1)
				return ret;
		}
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

		std:fill_n(a[0],100*100,0);
//		memset(a,0,sizeof(a));
//		cin >>a;
//		cout<<a;
		for(int i=0; i< m; i++){
			cin >> j >> l;
//			cout << j <<" "<< l << "\n";
			a[j][l]=1;
		}
	
		ret=dfs(0);
		
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

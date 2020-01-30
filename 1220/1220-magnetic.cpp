#include<iostream>
#include<algorithm>
#include<stack> 
#include<string>

using namespace std;

//int a[100][100];

int main(int argc, char** argv)
{
    int test_case;
    int T;
    
	for(test_case = 1; test_case <= 1; ++test_case)
    {
        int n;
		int flag=0;
		int ret=0;
		int a[100][100]={0,};
	//	stack<char> s;
//		string str1;
//		string str2;
		
        cin>>n;
//      cout<<n << m << "\n";

//		std:fill_n(a[0],100*100,0);
//		memset(a,0,sizeof(a));
//		cin >>a;
//		cout<<a;
		for(int i=0; i< n; i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
//			cout << j <<" "<< l << "\n";
		}
		for(int j=0;j<100;j++){
			flag=0;
			for(int i=0;i<100;i++){
				if(a[i][j]==1){
					flag=1;
				}else if(a[i][j]==2&&flag){
					flag=0;
					ret++;
				}
			}
		}
			
		
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

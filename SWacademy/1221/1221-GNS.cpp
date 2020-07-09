#include<iostream>
#include<algorithm>
#include<stack> 
#include<string>
#include<map>

using namespace std;

//int a[3334][3];
//int b[3334][3];



int main(int argc, char** argv)
{
    int test_case;
    int T;
   cin >> T; 
	for(test_case = 1; test_case <= 10; ++test_case)
    {
      	string n;
		string s;
		int m;
		int ret=0;
		map<string,int> mm;
		string v[10]={"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};
 
		cin>>n >> m;

		for(int i=0; i< m; i++){
			cin >> s;
			mm[s]++;
		//	cout << a[i] <<"\n";
		}
		cout<<n<<"\n";
		for(int i=0;i<10;i++){
			int k = mm[v[i]];
			for(int j =0;j<k;j++){
				cout<<v[i]<<" ";
			}
		}
		cout<<"\n";

/*		for(int j=0;j<100;j++){
			flag=0;
			for(int i=0;i<100;i++){
				if(a[i][j]==1){
					flag=1;
				}else if(a[i][j]==2&&flag){
					flag=0;
					ret++;
				}
			}
		}*/
			
		
//        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

#include<iostream>
#include<algorithm>
 
using namespace std;

char a[100][100];

int main(int argc, char** argv)
{
    int test_case;
    int T;
    
	for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
		int temp;
		int ret=0;
//		string str1;
//		string str2;
		
        cin>>T;
//      cout<<n;

//		std:fill_n(b,202,0);

		for(int i=0;i<100;i++){
			for(int j=0;j<100;j++){
				cin>>a[i][j];
			}
		}

		for(int i=0; i < 100;i++){
			for(int j=0; j< 100;j++){
				for(int n=100;n>=ret;n--){
					if(j<=(100-n)){
						for(int k=0;k<n/2;k++){
//							cout << a[i][j+k] << a[i][j+n-1-k] << "\n";
							if(a[i][j+k]==a[i][j+n-1-k]){
								if(!temp)
									temp=1;
							continue;
						
							}else{
								temp=0;
								break;
							}
					
						}
						if(temp){
//					cout << "row" << i << j << '\n';
//					ret++;
							temp=0;
							if(ret<n){
//								cout << "row" << i <<" " << j << " " << n << '\n';
								ret=n;
							}
						}
					}
					if(i<=(100-n)){
						for(int k=0;k<n/2;k++){
							if(a[i+k][j]==a[i+n-1-k][j]){
								if(!temp)
									temp=1;
						//cout << "col" << i <<j<<"\n";
								continue;
							}else{
								temp=0;
								break;
							}
						}
						if(temp){
//					cout << "col" << i << j <<'\n';
							temp=0;
							if(ret<n){
//								cout << "col" << i<<" " << j<<" " << n << '\n';
//						cout << a[i][j] << a[i+n-1][j]<<'\n';
								ret=n;
							}
//					ret++;
						}
					}
				}
			}
		}
 
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

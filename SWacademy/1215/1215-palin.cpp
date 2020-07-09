#include<iostream>
#include<algorithm>
 
using namespace std;

char a[8][8];

int main(int argc, char** argv)
{
    int test_case;
    int T;
    
	for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
		int temp;
		int ret=0;
		string str1;
		string str2;
		
        cin>>n;
//      cout<<n;

//		std:fill_n(b,202,0);

		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>a[i][j];
			}
		}

		for(int i=0; i < 8;i++){
			for(int j=0; j< 8;j++){
				if(j<=8-n)
				for(int k=0;k<n/2;k++){
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
					ret++;
					temp=0;
				}
				if(i<=8-n)
				for(int k=0;k<n/2;k++){
					if(a[i+k][j]==a[i+n-1-k][j]){
						if(!temp)
							temp=1;
						continue;
					}else{
						temp=0;
						break;
					}
				}
				if(temp){
//					cout << "col" << i << j <<'\n';
					temp=0;
					ret++;
				}
			}
		}
 
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

#include<iostream>
#include<algorithm>
 
using namespace std;

char a[100][100];

int power(int n, int m){
	if(m==1){
		return n;
	}else{
		return n*power(n,m-1);
	}

}

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
//		string str1;
//		string str2;
		
        cin>>T;
//      cout<<n;

//		std:fill_n(b,202,0);
		cin >> n >> m;

		ret=power(n,m);
 
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

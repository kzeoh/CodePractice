#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
    int a[100][100];
	int b[202];
    
	for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
		int temp;
        cin>>n;
//      cout<<n;

		std:fill_n(b,202,0);

        for(int i=0; i < 100; i++){
			for(int j=0; j < 100; j++){
//				cin >> a[i][j];
				cin >> temp;
				b[i]+=temp;
				b[j+100]+=temp;
				if(i==j)
					b[200]+=temp;
				if(i+j==100)
					b[201]+=temp;
			}
        }
        int ret = 0;
		int max =0;

		for(int i=0;i < 202;i++){
			if(max<b[i])
				max=b[i];
		}
 
        cout<<'#'<<test_case<<' '<<max<<'\n';
 
    }
    return 0;
}

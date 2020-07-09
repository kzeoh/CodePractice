#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
    int a[1001];
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
	cin >> T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int n;
		int temp = 0;
		int max = 0;
		int maxVal=0;
        cin>>n;
//      cout<<n;
        for(int i=0; i < 1000; i++){
            cin>>temp;
			a[temp]++;
			if((a[temp]>=max)){
				if(a[temp]==max&&temp>maxVal)
					maxVal=temp;
				else{
					max=a[temp];
					maxVal=temp;
				}
			}
        }
 
        cout<<'#'<<test_case<<' '<<maxVal<<'\n';
 		std::fill_n(a,1001,0);
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

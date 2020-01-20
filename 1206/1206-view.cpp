#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
    int a[1000];
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
        cin>>n;
//      cout<<n;
        for(int i=0; i < n; i++){
            cin>>a[i];
        }
        int ret = 0;
        int temp = 0;
 
        for (int i=2; i < n-2; i++){
            temp=a[i]-max(max(a[i-1],a[i-2]),max(a[i+1],a[i+2]));
            //cout<<temp;
            if(temp>0)
                ret += temp;
        }
 
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

#include<iostream>
#include<algorithm>
 
using namespace std;

int a[100][100]; 
int cnt;

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

		cin >> str1;
//		cout << str1;
		cin >> str2;

		for(int i=0; i < str2.length()-str1.length()+1;i++){
			string str3;
			str3=str2.substr(i,str1.length());
//			cout <<str3<<'\n';
			if(str3.compare(str1)==0)
				ret++;
		}
 
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

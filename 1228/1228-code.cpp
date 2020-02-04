#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	char c;
	int n = 0 , m = 0;
	int r, l;
	int a[100]={0,};	
	for(int t=1; t<=10;t++){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}

		cin >> m;
//		cout << m;	
		for(int i=0;i<m;i++){
			cin >> c;
			cin >>r>>l;
			
			for(int j=0;j<l;j++){
			//	cout<<r<<" ";
				cin >> a[r];
				r++;
			}
		
		}
		cout<<"#"<<t;
		for(int i=0;i<10;i++){
			cout<<" "<<a[i];
		}
		cout<<"\n";
		std:fill_n(a,31,0);

	}

	return 0;
}

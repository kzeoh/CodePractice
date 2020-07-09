#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	char c;
	int n = 0 , m = 0;
	int r, l;
	int temp;
	int num;
	vector<int> v;	
	for(int t=1; t<=10;t++){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> temp;
			v.push_back(temp);
		}

		cin >> m;
//		cout << m;	
		for(int i=0;i<m;i++){
			cin >> c;
			cin >>r>>l;
			
			for(int j=0;j<l;j++){
			//	cout<<r<<" ";
				cin >> num;
				v.insert(v.begin()+r,num);
				r++;
			}
		
		}
		cout<<"#"<<t;
		for(int i=0;i<10;i++){
			cout<<" "<<v.at(i);
		}
		cout<<"\n";
		v.clear();
//		std:fill_n(v,v.size(),0);

	}

	return 0;
}

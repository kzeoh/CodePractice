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
			if(c=='I'){
				cin >>r>>l;
/*				if(r>10)
					continue;		*/
				for(int j=0;j<l;j++){
					if(r>10){
						cin >> num;
						continue;
					}		
					cin >> num;
					v.insert(v.begin()+r,num);
					r++;
				}
			}else if(c=='D'){
				cin >> r >> l;
				if(r>10)
					continue;
				v.erase(v.begin()+r,v.begin()+r+l);
/*				for(int j=0;j<l;j++){
					
				}*/
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

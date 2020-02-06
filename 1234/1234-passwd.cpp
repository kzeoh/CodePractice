#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

int main(){
	
	for(int t=1;t<=10;t++){
		int N,idx=0;
		string s;

		cin >> N >> s;
//		cout<< s<<"\n";	
		while(idx<=s.size()-2){
			if(s[idx]==s[idx+1]){
//				cout<<idx<<"\n";
				s.erase(idx,1);
				s.erase(idx,1);
				idx=0;
				continue;
			}
			idx++;
//			cout<< idx<<" "<< s.size()<<"\n";

		}
		cout<<"#"<<t<<" "<<s<<"\n";	
			
	
	}

	return 0;
}

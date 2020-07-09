#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(){
	int t;
	map <string, int> m;
	vector<int> v;

	m["0001101"]=0;
	m["0011001"]=1;
	m["0010011"]=2;
	m["0111101"]=3;
	m["0100011"]=4;
	m["0110001"]=5;
	m["0101111"]=6;
	m["0111011"]=7;
	m["0110111"]=8;
	m["0001011"]=9;
	
	cin >> t;
	for(int T=1; T<=10; T++){
		int N, M;
		int odd=0, even=0,last=0,max=0,flag=0,done=0;
		cin >> N >> M;
//		cout << N<<" "<< M<<"\n";
		
		for(int i=0;i<N;i++){
			string s, s2;		
			cin >> s;
//			cout << s<<"\n";
			if(!flag)
			for(int j=M-1;j>=0;){
				if(s[j]=='1'){
//					cout<<j<<"\n";
					s2=s.substr(j-6,7);
					v.insert(v.begin(),m[s2]);
//					cout<<v[0];	
					j-=6;
					if(!flag)
						flag=1;
				}else{
					j-=1;
				}
			}
				
			for(int j=0;j<v.size();j++){
				if(j==7)
					last=v[j];
				else if(j%2==0)
					even+=v[j];
				else
					odd+=v[j];
//				if(!done){
//				cout<<v[j]<<"\n";
				max+=v[j];
//					if(j==0)
//						done=1;
//				}
			}

			even*=3;
			if((odd+even+last)%10==0&&flag){
				done=1;
//				cout<<max<<"\n";
			}	
			v.clear();

		}
		if(done)
			cout<<"#"<<T<<" "<<max<<"\n";
		else
			cout<<"#"<<T<<" "<<0<<"\n";
		v.clear();
	}


	return 0;
}

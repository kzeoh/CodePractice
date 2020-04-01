#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main() {

	vector <string> v;

	int tc;

	cin >> tc;

	for (int i = 1;i <= tc;i++) {
		int n;
		string s;
		string s1;
		cin >> n;
		cin >> s;

		//v.push_back(s);

		for (int j = 0;j < s.size();j++) {
			for (int k = 1;k <= s.size()-j;k++) {
				s1=s.substr(j,k);
//				cout <<s1<<"\n";
				v.push_back(s1);
			}
		}
		sort(v.begin(),v.end());
		v.erase(unique(v.begin(), v.end()), v.end());
//		sort(v.begin(), v.end());
		if(n-1<v.size()){
			cout << "#" << i << " " << v[n-1]<<"\n";
//			for(int k=1;k<=v.size();k++) cout<< v[k-1]<<"\n";
		}
		else
			cout << "#" << i << " none\n";
		
		v.clear();
	}



	return 0;
}

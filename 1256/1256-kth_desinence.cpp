#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	vector <string> v;
	int tc;
	string s;

	cin >> tc;

	for (int i = 1;i <= tc;i++) {
		int N;
		cin >> N;
		cin >> s;

		v.push_back(s);
		for (int j = 1;j < s.size();j++) {
			v.push_back(s.substr(j));
		}
		
		sort(v.begin(), v.end());
		cout << "#" << i << " " << v[N-1]<< "\n";

		v.clear();	
	}



	return 0;
}

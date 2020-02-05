#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int n;
	string s;
	char c;
	int flag=0;
	int cnt=0;

	cin >> n;

	for(int i=1;i<=n;i++){
		s = to_string(i);
		for(int j=0; j<s.size();j++){
			c=s.at(j);
			if(c=='3')
				cnt++;
			else if(c=='6')
				cnt++;
			else if(c=='9')
				cnt++;
		}
		
	}
	cout << cnt<<"\n";

	return 0;
}

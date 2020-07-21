#include <iostream>

using namespace std;

int main(){

	int N;
	int answer=0;

	cin >> N;

	for(int i=0;i<N;i++){
		int temp;
		char c;
		cin >> c;
		answer+=c-'0';
	}

	cout<< answer<<"\n";


	return 0;
}

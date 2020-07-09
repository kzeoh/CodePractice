#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
	int T;
//	cin >> T;

	for(int t=1; t<=10;t++){
		int n;
		queue <int> q;
		int num;
		cin >> n;

		for(int i=0;i<8;i++){
			cin >> num;
			q.push(num);
		}
/*		for(int i=0;i<8;i++){
			int num2 = q.front();
			cout << num2<<" ";
			q.pop();
			q.push(num2);			
		}
		cout <<"\n";*/
		
		int temp=0;
		num=1;
		while(1){
			temp=q.front();
			q.pop();
			temp-=num;
			if(temp<=0){
				temp=0;	
				q.push(temp);
				break;
			}
			q.push(temp);
			if(num==5)
				num=1;
			else
				num++;
		}
		cout <<"#" << t<<" ";
		for(int i=0;i<8;i++){
			cout << q.front()<<" ";
			q.pop();
		}
		cout <<"\n";

	}

	return 0;
}

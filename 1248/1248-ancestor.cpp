#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main() {
	int t = 0;
	queue<int> q;
	int check[10001] = { 0, };

	cin >> t;

	for (int T = 1; T <= 10; T++) {
		int v, e, vict1, vict2;
		int n=0, m=0;
		int target = 0;
		int parent = 0;
		int flag = 0;
		int size = 1;
		vector<vector<int>> vec(10001, vector<int>());
		vector<vector<int>> vecr(10001, vector<int>());

		cin >> v >> e >> vict1 >> vict2;

		for (int i = 0; i < e; i++) {
			cin >> n >> m;
			vec[n].push_back(m);
			vecr[m].push_back(n);
		}

/*	q.push(1);
		q.push(0);
		while(!q.empty()){
			target=q.front();
			q.pop();
			if(target==0){
				cout<<"emp\n";
				continue;
			}else
				cout<<target<<" ";
			for (int i =0;i<vec[target].size();i++){
				q.push(vec[target][i]);
			}
			q.push(0);		
		}
		cout<<"\n";
	
		for(int i=1;i<=v;i++){
			vec[i].clear();
			vecr[i].clear();
		}*/

		q.push(vict1);
		q.push(vict2);

		while (!q.empty()) {
			target = q.front();
//			cout<<target<<"\n";
			q.pop();
			for (int i = 0; i < vecr[target].size(); i++) {
				q.push(vecr[target][i]);
				if(check[vecr[target][i]]==0)
					check[vecr[target][i]] = 1;
				else {
					parent = vecr[target][i];
					flag = 1;
					break;
				}
			}
			if (flag) {
				while (!q.empty())
					q.pop();
			}
		}

		q.push(parent);

		while(!q.empty()){
			target=q.front();
			q.pop();
			for (int i =0;i<vec[target].size();i++){
				q.push(vec[target][i]);
				size++;
			}		
		}
	
		for(int i=1;i<=v;i++){
			vec[i].clear();
			vecr[i].clear();
		}	
		std:fill_n(check,10001,0);
		cout <<"#"<<T<<" "<< parent <<" "<<size<< "\n";



	}

	return 0;
}


#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

int main(){

	int tc;
	priority_queue<pair<double, int>,vector<pair<double, int>>,greater<> > q;
	int	visited[1001];

	cin >> tc;

	for(int i=1;i<=tc;i++){
				
		double x[1001], y[1001];
		double e=0, sum=0;

		int N;

		cin >> N;

		for(int j=0;j<N;j++){
			cin >> x[j];
		}
		for(int j=0;j<N;j++){
			cin >> y[j];
		}
		cin >> e;

		q.push({0.0,0});

		while(!q.empty()){
			int current = q.top().second;
			double dist = q.top().first;
			q.pop();
			
			if(visited[current])
				continue;
/*			if(i==3)
				cout<<dist<<" "<<current<<"\n";*/
			sum+=dist;
			visited[current]=1;
			for(int j=0;j<N;j++){
				if(visited[j])
					continue;
				q.push({(pow(x[current]-x[j],2)+pow(y[current]-y[j],2))*e,j});
/*				if(i==3)
				cout<<"now "<<q.top().first<<" "<<q.top().second<<"\n";*/

			}
		}	

		cout<<"#"<<i<<" ";	
		printf("%.0lf\n",sum);
		fill_n(visited,1001,0);

	}	
	

	return 0;
}

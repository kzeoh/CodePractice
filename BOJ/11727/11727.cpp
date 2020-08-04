#include <iostream>

using namespace std;

int dp[10001];

int fdp(int num){
	if(dp[num]){
		return dp[num];
	}
	dp[num]=(fdp(num-1)%10007+2*fdp(num-2)%10007)%10007;

	return dp[num];
}

int main(){

	int n;
	cin >> n;


	dp[0]=0;
	dp[1]=1;
	dp[2]=3;

	int answer = fdp(n);

	cout << answer <<"\n";

	return 0;
}

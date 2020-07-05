// you can use includes, for example:
#include <algorithm>
#include <cmath>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector <bool> isPrime(N+1,true);
    vector <int> primeList;
    vector <int> semiPrime(N+1,0);
    vector<int> answer;
    
    for(int i = 2 ; (i * i) <= N ; ++i){
		if(isPrime[i]){
			for(int j = i * i ; j <= N ; j += i) 
			    isPrime[j]=false;
		}
	}
    
    for(int i=2;i<isPrime.size();i++){
        if(isPrime[i]){
            primeList.push_back(i);
        }
    }
    
    for(int i=0;i<primeList.size();i++){
        for(int j=i;j<primeList.size();j++){
            int sumVal = primeList[i]*primeList[j];
            if(sumVal>N){
                break;
            }
            semiPrime[sumVal]++;
        }
    }
    
    for(int i=2;i<semiPrime.size();i++){
        semiPrime[i]+=semiPrime[i-1];    
    }
    
    for(int i=0;i<P.size();i++){
        answer.push_back(semiPrime[Q[i]]-semiPrime[P[i]-1]);
    }
    
    return answer;
}

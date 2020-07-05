// you can use includes, for example:
// #include <algorithm>
#include <cmath>
#include<vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    
    vector <pair<int,int>> v;
    
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            v.push_back({i,N/i});
        }
    }
    int minVal = 2*(1+N);
    for(int i=1;i<v.size();i++){
        if(2*(v[i].first+v[i].second)<minVal)
            minVal=2*(v[i].first+v[i].second);
    }
    
    return minVal;
}

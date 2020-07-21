// you can use includes, for example:
// #include <algorithm>
#include<cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector <int> reverseAdd(A.size()+1,0);
    
    for(int i=A.size()-1;i>=0;i--){
        reverseAdd[i]=reverseAdd[i+1]+A[i];
    }
    int aggSum =0;
    int minDiff = 1e9;
    
    for(int i=0;i<A.size()-1;i++){
        aggSum+=A[i];
        if(abs(aggSum-reverseAdd[i+1])<minDiff){
            minDiff=abs(aggSum-reverseAdd[i+1]);
            
            //cout << reverseAdd[i+1]<< <<minDiff<<n;
        }
    }
    return minDiff;
}

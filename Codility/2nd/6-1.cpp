// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int answer = 1;
    
    if(A.size()<1){
        return 0;
    }
    
    sort(A.begin(),A.end());
    
    int prev = A[0];
    
    for(int i=1;i<A.size();i++){
        if(A[i]!=prev){
            answer++;
        }
        prev=A[i];
    }
    
    return answer;
}

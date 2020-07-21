// you can use includes, for example:
// #include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<bool> B(1000000001,0);
    int answer=0;
    
    int Asize = A.size();
    
    for(int i=0;i<Asize;i++){
        if(B[A[i]]){
            B[A[i]]=0;
        }else
            B[A[i]]=1;
    }
    
    for(int i=0;i<B.size();i++){
        if(B[i]){
            answer=i;
            break;
        }
        
    }
    
    return answer;
    
}

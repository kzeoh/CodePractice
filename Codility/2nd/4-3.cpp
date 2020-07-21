// you can use includes, for example:
#include <algorithm>


// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    sort(A.begin(),A.end());
    
    int temp=0;
    int answer=1;
    
    for(int i=0;i<A.size();i++){
        if(A[i]<1||temp==A[i])
            continue;
        if(temp!=A[i]){
            if(temp+1==A[i]){
                temp=A[i];    
            }else{
                return temp+1;
            }
            
        }    
    }
    if(temp>0)
        return temp+1;
    return answer;
}

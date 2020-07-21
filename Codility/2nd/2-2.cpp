// you can use includes, for example:
#include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=0;

    int Asize = A.size();
    
    sort(A.begin(),A.end());

    for(int i=0;i<Asize-1;i+=2){
        if(A[i]!=A[i+1]){
            answer=A[i];
            break;
        }
    }
    
        answer=A[Asize-1];
    }

    
    return answer;

}

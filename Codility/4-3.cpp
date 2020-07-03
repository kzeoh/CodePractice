// you can use includes, for example:
// #include <algorithm>
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set <int> s;
    int answer=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>0&&!s.count(A[i])){
            s.insert(A[i]);
        }
    }
    for(int i=1;i<1000002;i++){
        if(!s.count(i)){
            answer=i;
            break;
        }
    }
    
    return answer;
}

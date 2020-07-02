#include <algorithm>
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=1;
    int count=0;
    set<int> s;
    
    for(int i=0;i<A.size();i++){
        s.insert(A[i]);    
    }
    
    for(int i=1;i<=A.size()+1;i++){
        if(s.count(i)==0){
            answer=i;
            break;
        }
    }
    
    return answer;
}


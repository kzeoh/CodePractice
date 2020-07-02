#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=0;
    int count=0;
    if(A.size()==1){
        answer=++A[0];
        return answer;
    }else if(A.size()==0){
        answer=1;
        return answer;
    }
    sort(A.begin(),A.end());
    count=A[0];
    //cout << count;
    for(int i=1;i<A.size();i++){
        count++;
        if(A[i]!=count){
            answer=count;
            break;
        }
    }
    

    //cout<<answer;
    
    return answer;
}

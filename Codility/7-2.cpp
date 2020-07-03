// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    
    stack<int> s;
    int answer =0;
    
    for(int i=0;i<A.size();i++){
        if(B[i]){
            s.push(A[i]);
        }else{
            if(s.empty()){
                answer++;
            }else{
                while(!s.empty()){
                    if(A[i]>s.top()){
                        s.pop();
                    }else{
                        break;
                    }
                }
                if(s.empty()){
                    answer++;
                }
            }
        }
    }
    
    answer+=s.size();
    
    return answer;
    
    
}

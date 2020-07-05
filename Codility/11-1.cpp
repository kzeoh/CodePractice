// you can use includes, for example:
#include <algorithm>
#include <map>
#include <cmath>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //map<int,int> m;
    vector<int> m(2*A.size()+1,0);
    vector<int> answer;
    
    for(int i=0;i<A.size();i++){
        m[A[i]]++;
    }
    
    for(int i=0;i<A.size();i++){
        int cnt=0;
        int current =A[i];
        for(int j=1;j<=sqrt(current);j++){
            if(current%j==0){
                cnt+=m[j];
                
                if(current/j!=j){
                    cnt+=m[current/j];
                }
                
            }
        }   
        answer.push_back(A.size()-cnt);
    }
    
    return answer;
}

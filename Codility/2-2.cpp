#include <algorithm>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

map<int,int> m;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=0;
    for(int i=0;i<A.size();i++){
        m[A[i]]++;
    }
    
    for(auto it=m.begin();it!=m.end();it++){
        
        if(it->second%2!=0){
            answer = it->first;
            break;
        }
            
        //cout<<it->first << " "<<it->second<<"\n";
    }
    
//    cout << answer;
    return answer;
}


// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    
    stack <char> s;
    
    for(int i =0; i< S.size();i++){
        if(S[i]=='('){
            s.push('(');
        }else{
            if(s.top()=='('){
                s.pop();
            }else{
                return 0;
            }
        }    
        
    }
    
    if(!s.empty()){
        return 0;
    }else{
        return 1;
    }
    
}


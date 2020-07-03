// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    
    stack <char> s;
    
    for(int i=0;i<S.size();i++){
        if(S[i]=='{'||S[i]=='('||S[i]=='[')
            s.push(S[i]);
        else{
            if(S[i]=='}'){
                if(s.top()!='{')
                    return 0;
                else
                    s.pop();
            }else if(S[i]==')'){
                if(s.top()!='(')
                    return 0;
                else
                    s.pop();
            }else if(S[i]==']'){
                if(s.top()!='[')
                    return 0;
                else
                    s.pop();
            }
        }
    }
    if(s.empty())
        return 1;
    else
        return 0;
    
}


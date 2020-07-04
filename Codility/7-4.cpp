// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    
    stack<int> s;
    int answer=0;
    //int minVal=H[0];
    s.push(-1);
    for(int i =0;i<H.size();i++){
        if(s.top()<=H[i]){
            if(s.top()==H[i])
                continue;
            s.push(H[i]);
            //cout<<H[i]<<"\n";
        }else{
            while(s.top()>H[i]){
                s.pop();
                answer++;
            }
            if(s.top()==H[i])
                continue;
            s.push(H[i]);
            //cout<<H[i]<<"\n";
            
        }
    }
    while(s.top()!=-1){
        s.pop();
        answer++;
    }
    
    return answer;
    
}


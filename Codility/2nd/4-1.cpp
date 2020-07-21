// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    vector<int> v (X+1,0);
    int cnt=0;
    int answer=-1;
    
    for(int i=0;i<A.size();i++){
        if(v[A[i]]==0){
            cnt++;
            v[A[i]]=1;
            if(cnt==X){
                answer=i;
                break;
            }
        }
    }
    
    return answer;
    
}

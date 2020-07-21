// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    vector<int> v(N,0);
    
    int maxC=0;
    int curMax=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]==N+1){
            maxC=curMax;
        }else{
            if(v[A[i]-1]<maxC){
                v[A[i]-1]=maxC+1;
                
            }else{
                v[A[i]-1]++;
                
            }
            if(v[A[i]-1]>curMax){
                curMax=v[A[i]-1];
            }
        }
    }
    
    for(int i=0;i<v.size();i++){
        if(v[i]<maxC){
            v[i]=maxC;
        }
    }
    
    return v;
}

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int gcd(int N, int M){
    if(N<M){
        int temp = M;
        M = N;
        N=temp;
    }
    if(N%M==0){
        return M;
    }else
        return gcd(M, N%M);
}

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=0;
    
    for(int i=0;i<A.size();i++){
        int num = gcd(A[i],B[i]);
        int a=A[i];
        int gcd_a=0;
        while(gcd_a!=1){
            gcd_a = gcd(a,num);
            a/=gcd_a;
        }
        
        int b=B[i];
        int gcd_b = 0;
        while(gcd_b!=1){
            gcd_b = gcd(b,num);
            b/=gcd_b;
        }
        
        if(a==1 && b==1)
            answer++;
        
    }
    
    return answer;
}


// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int gcd(int N, int M){
    if(N<M){
        int temp=M;
        M=N;
        N=temp;
    }
    if(N%M==0){
        return M;
    }else
        return gcd(M,N%M);
    
}

int solution(int N, int M) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=0;
    int num = gcd(N,M);
    //cout<< num;
    
    answer=N/num;
    
    return answer;
}


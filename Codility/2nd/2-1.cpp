// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    
    while(K!=0){
        vector <int> v = A;
        for(int i=1;i<A.size();i++){
            A[i]=v[i-1];
        }
        A[0]=v[A.size()-1];
        
        K--;
    }
    
    return A;
    
}
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)

    while(K!=0){
        if(A.size()>0){
            vector <int> v = A;
            for(int i=1;i<A.size();i++){
                A[i]=v[i-1];
            }
            A[0]=v[A.size()-1];
        }
        K--;
    }

    return A;

}

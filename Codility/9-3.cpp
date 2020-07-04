// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int answer;
    int maxList[A.size()]={0,};
    
    maxList[0]=A[0];
    answer=A[0];
    for(int i=1;i<A.size();i++){
        maxList[i]=max(A[i],maxList[i-1]+A[i]);
        if(maxList[i]>answer)
            answer=maxList[i];
    }
    
    return answer;
    
}


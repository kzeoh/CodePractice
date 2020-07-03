// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=B/K;
    
    int temp =A/K;
    if(A%K==0)
        temp-=1;
        
    answer-=temp;
    
    /*for(int i=A;i<=B;i++){
        if(i%K==0){
            answer++;
        }
    }*/
    
    return answer;
}

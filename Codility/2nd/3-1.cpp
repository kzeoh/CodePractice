// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    
    int distance = Y-X;
    int answer=0;
    
    if(distance%D==0){
        answer=distance/D;
    }else{
        answer=distance/D+1;
    }
    
    return answer;
}

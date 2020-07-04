// you can use includes, for example:
// #include <algorithm>
#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int answer=0;
    int upper=N;
    if (N==1)
        return 1;
    for(int i=1;i<=sqrt(N);i++){
        /*if(upper<=i)
            break;*/
        if(N%i==0){
            upper=N/i;
            if(upper==i)
                answer+=1;
            else
                answer+=2;
        }
        
    }
    
    return answer;
}


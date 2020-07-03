// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int count=0;
    int answer=0;
    for(int i = A.size()-1;i>=0;i--){
        if(A[i]){
            count++;
        }else
            answer+=count;
    }
    if(answer>1000000000)
        return -1;
    return answer;
}


int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int answer ;
    int sub = Y - X;
    
    answer=sub/D;
    if(sub%D>0)
        answer++;
        
    cout << answer;
    
    return answer;
}

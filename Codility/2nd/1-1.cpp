#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << this is a debug message << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    vector <int> v;
    int answer =0;
    bool start=false;
    
    while(N!=0){
        v.push_back(N%2);
        N/=2;
        cout<< N<<n;
    }
    int count=0;
    for(int i=0;i<v.size();i++){
        if(start){
            if(v[i]==1){
                if(answer<count){
                    answer=count;
                }
                count=0;
            }else{
                count++;
            }
            
        }else if(v[i]==1){
            start=1;
        }
        
    }
    return answer;
    
}

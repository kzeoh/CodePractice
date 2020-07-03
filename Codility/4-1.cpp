// you can use includes, for example:
#include <algorithm>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    int answer = -1, idx=0, tar=X;
    map <int,int> m;
    
    for(int i=0;i<A.size();i++){
        m[A[i]]=i;
        if(tar==A[i]){
            count =0;
            for(int j=1;j<X;j++){
                if(m[j]){
                    count++;
                }else{
                    break;
                }
                //cout << j << " "<< m[j]<<"\n";
            }
            if(count==X-1){
                answer=i;
                break;
            }else{
                tar-=1;
            }
        }
    }
    
    return answer;
    
}


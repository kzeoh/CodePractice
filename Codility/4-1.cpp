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
    m[A[0]]=1;
    for(int i=0;i<A.size();i++){
        if(i>0)
            m[A[i]]=i;
        if(tar==A[i]){
            count =tar;
            for(int j=tar;j>=1;j--){
                if(m[j]){
                    count--;
                }else if(A.size()==1){
                    return 0;
                }
                else{
                    break;
                }
                //cout << j << " "<< m[j]<<"\n";
            }
            if(count==0){
                answer=i;
                break;
            }else{
                tar=count;
            }
        }
    }
    
    return answer;
    
}

// you can use includes, for example:
// #include <algorithm>
#include <map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int domList[100000]={0,};
    int domVal=1e9+1;
    int domCnt=0;
    map<int,int>m;
    int answer=0;
    
    for(int i =A.size()-1;i>=0;i--){
        m[A[i]]++;
        if(m[A[i]]>domCnt){
            domCnt=m[A[i]];
            domVal=A[i];
        }else if(m[A[i]]==domCnt){
            domVal=1e9+1;
        }
        domList[i]=domVal;
    }
    m.clear();
    domCnt=0;
    domVal=1e9+1;
    for(int i =0;i<A.size()-1;i++){
        m[A[i]]++;
        if(m[A[i]]>domCnt){
            domCnt=m[A[i]];
            domVal=A[i];
        }else if(m[A[i]]=domCnt){
            domVal=1e9+1;
        }
        if(domVal!=1e9+1&&domVal==domList[i+1]){
            answer++;
        }
    }
    
    return answer;
}


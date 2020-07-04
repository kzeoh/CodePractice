// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int minList[A.size()]={0,};
    int maxList[A.size()]={0,};
    int answer=-1e9;
    if(A.size()<1)
        return 0;
    minList[0]=A[0];
    for(int i=1;i<A.size();i++){
        minList[i]=min(A[i],minList[i-1]);
    }
    maxList[A.size()-1]=A[A.size()-1];
    for(int i=A.size()-2;i>=0;i--){
        maxList[i]=max(A[i],maxList[i+1]);
    }
    
    for(int i=0;i<A.size();i++){
        if(maxList[i]-minList[i]>answer){
            answer=maxList[i]-minList[i];
        }
    }
    if(answer<=0)
        return 0;
    
    return answer;
}


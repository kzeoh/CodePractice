// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int maxList[100000]={0,};
    int maxList2[100000]={0,};
    int answer=0;
    
    for(int i=1;i<A.size()-1;i++){
        maxList[i]=max(maxList[i-1]+A[i],0);
        //cout<<maxList[i]<<"\n";
    }
    for(int i=A.size()-2;i>=1;i--){
        maxList2[i]=max(maxList2[i+1]+A[i],0);
        //cout<<maxList2[i]<<"\n";
    }
    
    for(int i=0;i<A.size()-2;i++){
        answer=max(answer,maxList[i]+maxList2[i+2]);
    }
    
    return answer;
}




// you can use includes, for example:
// #include <algorithm>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    map<int,int> m;
    //vector <int> domList;
    int domIdx=0;
    int domMax=0;
    bool dom=0;
    
    
    for(int i=0;i<A.size();i++){
        m[A[i]]++;
        if(m[A[i]]>domMax){
           domMax=m[A[i]];
           dom=1;
           domIdx=i;
        }else if(m[A[i]]==domMax){
            dom=0;
        }
    }
    //cout<<domMax<<A.size()<<"\n";
    if(dom&&(domMax>(A.size()/2))){
        return domIdx;
    }
    
    return -1;
}


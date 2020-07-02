// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int Y=0, X=0;
    int answer=1e9;
    int result;
    
    for(int i=0;i<A.size();i++){
        Y+=A[i];
    }
    //cout<<"Y"<<Y<<"\n";
    for(int i=0;i<A.size();i++){
        X+=A[i];Y-=A[i];
        result=X-Y;
        //cout<<X<<Y<<result<<"\n";
        if(result<0)
            result*=-1;
        if(result<answer)
            answer=result;
        
    }
    
    return answer;
}

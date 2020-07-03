// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int minIdx=0;
    float minVal=(float)(A[0]+A[1])/(float)2;
    
    
    for(int i=2;i<A.size();i++){
        float temp = (float)(A[i]+A[i-1]+A[i-2])/(float)3;
        //cout << temp<<"\n";
        if(temp<minVal){
            minVal = temp;
            minIdx=i-2;
        }
        temp = (float)(A[i]+A[i-1])/(float)2;
       // cout << temp<<"\n";
        if(temp<minVal){
            minVal = temp;
            minIdx=i-1;
        }
    }
    
    return minIdx;
}


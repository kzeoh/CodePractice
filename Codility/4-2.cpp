// you can use includes, for example:
#include <algorithm>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector <int> v(N+1);
    int maxVal=0;
    
    for(int i =0;i<A.size();i++){
        if(N+1==A[i]){
            for(int j=1;j<v.size();j++){
                v[j]=maxVal;
            }
        }else{
            v[A[i]]++;
            if(v[A[i]]>maxVal)
                maxVal=v[A[i]];
        }
        // for(int j=1;j<v.size();j++){
        //         cout<< v[j]<<" ";
        // }
        //cout<<"\n";
    }
    v.erase(v.begin());
    
    return v;
}

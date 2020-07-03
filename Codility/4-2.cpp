// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector <int> v(N+1);
    //map <int, int> m;
    int m[N+1]={0,};
    int count =0;
    
    int maxVal=0;
    int inc=0;
    
    for(int i =0;i<A.size();i++){
        if(N+1==A[i]){
            count++;
            inc=maxVal;
            /*for(int j=1;j<v.size();j++){
                v[j]=maxVal;
            }*/
        }else{
            if(m[A[i]]==count)
                v[A[i]]++;
            else{
                m[A[i]]=count;
                v[A[i]]=inc+1;
            }
            
            if(v[A[i]]>maxVal)
                maxVal=v[A[i]];
        }
        // for(int j=1;j<v.size();j++){
        //         cout<< v[j]<<" ";
        // }
        // cout<<"\n";
    }
    for(int j=1;j<v.size();j++){
           if(m[j]!=count)
                 v[j]=inc;
    }
    
    v.erase(v.begin());
    
    return v;
}

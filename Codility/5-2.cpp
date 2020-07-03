// you can use includes, for example:
// #include <algorithm>
#include <map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    map <char,int> m;
    vector <int> v;
    int minVal=1e9;
    m['A']=1;
    m['C']=2;
    m['G']=3;
    m['T']=4;
    
    for(int i=0;i<P.size();i++){
        string s = S.substr(P[i],Q[i]-P[i]+1);
        cout << s<<"\n";
    
        for(int j=0;j<s.size();j++){
            if(m[s[j]]<minVal){
                minVal=m[s[j]];
            }
        }
        v.push_back(minVal);
        
        minVal=1e9;
    }
    
    return v;
    
}

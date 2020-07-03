// you can use includes, for example:
// #include <algorithm>
#include <map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    map <int,int> m;
    int check[4][100001]={0,};
    int impCnt[4]={0,};
    vector <int> v;
    //int minVal=1e9;
    m[0]=1;
    m[1]=2;
    m[2]=3;
    m[3]=4;
    
    for(int i=0;i<S.size();i++){
        if(S[i]=='A'){
            impCnt[0]++;
        }else if(S[i]=='C'){
            impCnt[1]++;
            
        }else if(S[i]=='G'){
            impCnt[2]++;
            
        }else if(S[i]=='T'){
            impCnt[3]++;
        }
        
        for(int j=0;j<4;j++){
            check[j][i+1]=impCnt[j];
        }
    }
    
    for(int i=0;i<P.size();i++){
        for(int j=0;j<4;j++){
            if(check[j][Q[i]+1]-check[j][P[i]]>0){
                v.push_back(m[j]);
                break;
            }
        }
        
        
        // string s = S.substr(P[i],Q[i]-P[i]+1);
        // cout << s<<"\n";
    
        /*for(int j=0;j<s.size();j++){
            if(m[s[j]]<minVal){
                minVal=m[s[j]];
            }
        }*/
        
        //v.push_back(minVal);
        
        //minVal=1e9;
    }
    
    return v;
    
}

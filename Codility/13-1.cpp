// you can use includes, for example:
#include <algorithm>
#include <queue>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int fib(int N){
    if(N==0)
        return 0;
    else if(N==1)
        return 1;
    else{
        return fib(N-1)+fib(N-2);
    }
}
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    vector <int> fibList{0};
    
    queue <pair<int,int>> q;
    
    int N = A.size();
    vector <bool> visited(N+1,0);
    for(int i=1;fibList.back()<=N+1;i++){
        fibList.push_back(fib(i));
    //    cout<< fibList.back()<<" "<<N+1<<"\n";
    }
    
    reverse(fibList.begin(),fibList.end());
    
    q.push({-1,0});
    
    while(!q.empty()){
        pair <int, int> p = q.front();
        q.pop();
        for(int i = 0 ;i < fibList.size();i++){
            int pos = p.first+fibList[i];
            if(pos==N)
                return ++p.second;
            else if(pos<N&&A[pos]==1&&!visited[pos]){
                q.push({p.first+fibList[i],p.second+1});
                visited[pos]=true;
            }
        }
    }
    
    return -1;
}

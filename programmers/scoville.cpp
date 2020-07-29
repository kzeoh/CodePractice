#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    
    while(1){
        if(pq.size()==1&&pq.top()<K){
            return -1;
        }
        
        if(pq.top()<K){
            int temp=pq.top();
            pq.pop();
            temp+=(pq.top())*2;
            pq.pop();
            pq.push(temp);
            answer++;
        }else{
            break;
        }
    }
    return answer;
}

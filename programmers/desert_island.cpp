#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int visited[50000];

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(),people.end());
    
    int start=0, end=people.size()-1;
    
    while(start<=end){
        //cout<< start<<  <<end<<n;
        if(people[start]+people[end]<=limit){
            answer++;
            start++;end--;
        }else{
            answer++;
            end--;
        }
    }
        
    return answer;
}

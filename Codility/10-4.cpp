// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> peakList;
    int answer=0;
    
    for(int i=1;i<A.size()-1;i++){
        if(A[i]>A[i-1]&&A[i]>A[i+1]){
            peakList.push_back(i);
        }
    }
    
    for(int i=1;i<=peakList.size();i++){
        int num=A.size()/i;
        int blockNum=0;
        if(A.size()%i==0){
            for(int i=0;i<peakList.size();i++){
                if(peakList[i]>=num*blockNum&&peakList[i]<num*(blockNum+1)){
                    blockNum++;
                }
            }
            if(blockNum==i)
                answer=i;    
        }
    }
    
    return answer;
    
}

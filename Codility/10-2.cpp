// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> peakList;
    int prev=0;
    int after=0;
    int answer=0;
    int count =0;
    
    for(int i=1;i<A.size()-1;i++){
        after=A[i+1];
        prev=A[i-1];
        if(A[i]>prev&&A[i]>after){
            peakList.push_back(i);
         //   cout<< i << " ";
        }
    }
    if(peakList.size()==1)
        return 1;
    for(int i=2;i<=peakList.size();i++){
        count=1;
        int tar=peakList[0];
        for(int j=1;j<peakList.size();j++){
            if(peakList[j]-tar>=i){
                count++;
                tar=peakList[j];
            }
            if(count==i)
                break;
        }
        if(answer<count){
            answer=count;
        }else if(answer>count)
            break;
    }
    
    return answer;
}


#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {

	vector<vector<string>> v = [["yellow_hat", "headgear"], ["blue_sunglasses", "eyewear"], ["green_turban", "headgear"]];	

    int answer = 1;
    map<string, int> m;
    map<string, int>::iterator it;
    
    for(int i=0;i<clothes.size();i++){
        m[clothes[i][0]]++;
    }
    
    for(it=m.begin();it!=m.end();it++){
        int num=it->second;
        answer*=num;
    }
    
    return answer-1;
}

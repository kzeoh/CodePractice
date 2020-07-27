#include <iostream>

using namespace std;

int map[33];
int turn [33];
int present[33];
int score[33];
int horse[4];
int dice[10];
int answer=0;

void solve(int cnt, int sumVal){
	if(cnt==10){
		if(answer<sumVal)
			answer=sumVal;
		return;
	}

	for(int i=0;i<4;i++){
		int prev = horse[i];
		int cur = horse[i];
		int step=dice[cnt];

		if(turn[cur]>0){
			step-=1;
			cur=turn[cur];
		}
		while(step--){
			cur=map[cur];
	//		cout<< cur<<"\n";
		}
		if(present[cur]&&cur!=21)
			continue;
//		cout<<cur<<" "<<sumVal+score[cur]<<"\n";
		horse[i]=cur;
		present[cur]=1;
		present[prev]=0;
		solve(cnt+1,sumVal+score[cur]);
		horse[i]=prev;
		present[cur]=0;
		present[prev]=1;
	}


}


int main(){

	for(int i=0;i<=20;i++){
		map[i]=i+1;
	}
	map[21]=21;map[22]=23;map[23]=24;map[24]=30;
	map[25]=26;map[26]=30;map[27]=28;map[28]=29;
	map[29]=30;map[30]=31;map[31]=32;map[32]=20;

	turn[5]=22;
	turn[10]=25;
	turn[15]=27;

	for(int i=1;i<=20;i++){
		score[i]=i*2;
	}
	score[22]=13;score[23]=16;score[24]=19;
	score[25]=22;score[26]=24;
	score[27]=28;score[28]=27;score[29]=26;
	score[30]=25;score[31]=30;score[32]=35;

	for(int i=0;i<10;i++){
		cin >> dice[i];
	}

	solve(0,0);

	cout<< answer<<"\n";

	return 0;
}



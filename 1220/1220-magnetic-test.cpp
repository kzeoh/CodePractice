#include <cstdio>
 
using namespace std;
 
int main(){
 
    int n;
    int board[100][100];
    for(int T=1;T<=10;T++){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&board[i][j]);
        int cnt=0;
        for(int j=0;j<n;j++){
            bool flag=false;
            for(int i=0;i<n;i++){
                if(board[i][j]==1)
                    flag=true;
                if(board[i][j]==2&&flag){
                    cnt++;
                    flag=false;
                }
            }
        }
        printf("#%d %d\n",T,cnt);
    }
 
    return 0;
}

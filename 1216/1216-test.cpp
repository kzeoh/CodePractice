#include <stdio.h>
#include <algorithm>
 
using namespace std;
int main(void)
{
    int test_case=10;
//    scanf("%d\n", &test_case);
 
    for (int z = 1; z <= 1; z++) {
        int n;
        scanf("%d\n", &n);
        char map[100][100] = { {0,}, };
        for(int i=0;i<100;i++)
            scanf("%s", map[i]);
        int max = 0;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                int check1 = 0;
                int check2 = 0;
                int len1 = 0;
                int len2 = 0;
                int l;
                int k;
                for (k = 0,l=99; k <= (l-j)/2; k++) {
    
                    if ((j + max - 1) < 100) {//오른쪽 탐색
                        if (map[i][j+k] == map[i][l - k])
                        {
                            if (j + k == l - k)
                                len1++;
                            else
                                len1 += 2;
                        }
                        else {
                            k = -1;
                            l--;
                            len1 = 0;
                            //check1 = 1;
                        }
                    }
                    else
                        len1 = 1;                    
                }
//                if (l % 2 == 0)
//                    len1++;
                for (k = 0, l = 99; k <= (l-i)/2; k++) {                    
                    if (((i + max - 1) < 100)) {//아래 탐색
                        if (map[i + k][j] == map[l - k][j])
                        {
                            if (i + k == l - k)
                                len2++;
                            else
                                len2 += 2;
                        }
                        else {
                            k = -1;
                            l--;
                            len2 = 0;
                            //check2 = 1;
                        }
                    }
                    else
                        len2 = 1;
                }
//                if (l % 2 == 0)
//                    len2++;
                if (check1 == 0) {
                    if (len1 > max){
						printf("row: %d %d %d\n",i, j, len1);
                        max = len1;
					}
                }
                if (check2 == 0) {
                    if (len2 > max){
						printf("col: %d %d %d\n", i, j, len2);
                        max = len2;
					}
                }
            }
        }
 
        printf("#%d %d\n", z, max);
    }
    return 0;
}



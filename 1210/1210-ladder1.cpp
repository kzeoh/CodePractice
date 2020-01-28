#include<iostream>
#include<algorithm>
 
using namespace std;

int a[100][100]; 

int go_down(int i,int j){
	int ret;
	if(i==99){
		if(a[i][j]==2)
			return 1;
		else
			return 0;
	}
	if(a[i][j-1]==1&&(j-1>=0)){
		while(a[i][j-1]!=0){
			j--;
			if(j==0)
				break;
		}
		ret=go_down(i+1,j);

	}
	else if(a[i][j+1]==1&&(j+1<=99)){
		while(a[i][j+1]!=0){
			j++;
			if(j==99)
				break;
		}
		ret=go_down(i+1,j);
	}else{
		ret=go_down(i+1,j);
	}
	
	return ret;
	

}


int main(int argc, char** argv)
{
    int test_case;
    int T;
    
	for(test_case = 1; test_case <= 10; ++test_case)
    {
        int n;
		int temp;
		int ret=0;
        cin>>n;
//      cout<<n;

//		std:fill_n(b,202,0);

        for(int i=0; i < 100; i++){
			for(int j=0; j < 100; j++){
				cin >> a[i][j];
//				cin >> temp;
/*				b[i]+=temp;
				b[j+100]+=temp;
				if(i==j)
					b[200]+=temp;
				if(i+j==100)
					b[201]+=temp;*/
			}
        }
		for(int i=0;i<100;i++){
			if(a[0][i]==1)
				temp=go_down(1,i);
			if(temp=1){
				ret=i;
				break;
			}
		}		

 
        cout<<'#'<<test_case<<' '<<ret<<'\n';
 
    }
    return 0;
}

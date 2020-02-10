#include <iostream>
#include <algorithm>

using namespace std;

double a[2][11];


int main(){

	int t;

	cin >> t;

	for(int T=1 ; T<=10;T++){
		int n=0;
		double min=0,max=0;
		double dist=0,mind=0,maxd=0;
		double mid=0;
		double force=0,minf=0,maxf=0;
		cin >> n;
		cout<<"#"<<T<<" ";
		for (int i=0;i<n;i++){
			cin >> a[0][i];
		}
		for (int i=0;i<n;i++){
			cin >> a[1][i];
		}
		for (int i=0;i<n-1;i++){
			force=0;
			if(i>0){
				cout<<" ";
			}
			min=a[0][i];
			max=a[0][i+1];
			mid=(max+min)/2;
//			printf("max: %.10lf min: %.10lf mid: %.10lf\n",max,min,mid);
			for(int j=0;j<100;j++){
				for(int k=0;k<n;k++){
					if(a[0][k]<mid){
						dist=mid-a[0][k];
						force-=a[1][k]/(dist*dist);
					}else{
						dist=a[0][k]-mid;
						force+=a[1][k]/(dist*dist);
					}
/*				mind=mid-a[0][i];
				maxd=a[0][i+1]-mid;
				minf=(a[1][i]/(mind*mind));
				maxf=(a[1][i+1]/(maxd*maxd));*/
//				printf("force: %.10lf\n",force);
				}
//				printf("%.10lf\n",force);
				if(force==0){
					break;
				}else if(force>0){
					max=mid;
				}else{
					min=mid;
				}
				mid=(max+min)/2;
				force=0;
//				if(j%10==0)
//					printf("%.10lf %.10lf %.10lf\n",max,min,mid);
			}
/*			cout<<fixed;
			cout.precision(10);
			cout<<mid;*/
			printf("%.10lf",mid);
		}
		cout<<"\n";
	
	}

	return 0;
}

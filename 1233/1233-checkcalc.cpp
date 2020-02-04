#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

struct node{

	string value;
	int left;
	int right;

};

node a[1001];
stack <float> s;
int poss=1;

void preorder(int id){
	int temp;
	int num1;
	int num2;
	
	if(a[id].value=="+" || a[id].value=="-" || a[id].value=="*" || a[id].value=="/"){
		if(a[id].left==0||a[id].right==0)
			poss=0;
	}else{
		if(poss){
			if(a[id].left!=0||a[id].right!=0)
				poss=0;
		}
	}
	if(a[id].left!=0&&poss){
		preorder(a[id].left);
	}
	if(a[id].right!=0&&poss){
		preorder(a[id].right);
	}

}

int main(){
	string str;
	for(int t=1,n,limit,flag; t<=10; t++){	
		cin >> n;
		limit=n/2;
		flag=n%2;
		for(int i=1,m,r,l;i<=n;i++){
			char c;
			cin >> m;
			cin>>str;
			a[m].value=str;
			c=getchar();
			if(c!='\n'){
				cin >> l;
				a[m].left=l;
				c=getchar();
				if(c!='\n'){
					cin >>r;
					a[m].right=r;
				}
					
			}else{
				a[m].left=0;
				a[m].right=0;
			}
		//	cout<<str<<"\n";
			
			//cout << limit<<flag<<m << c <<"\n";
			/*if(i<=limit){
				cin >> l;
				a[m].left=l;
				if(i==limit&&!flag){
					a[m].right=0;
				}else{
					cin >> r;
//					cout << r<<"\n";
					a[m].right=r;
				}

			}else{
				a[m].left=0;
				a[m].right=0;
			}*/
		}
		cout<<"#"<<t<<" ";
		preorder(1);
		cout<<poss;
		cout<<"\n";

		poss=1;
		
		


	}
	
	
	
	return 0;
}

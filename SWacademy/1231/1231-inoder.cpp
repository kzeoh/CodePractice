#include <iostream>
#include <algorithm>

using namespace std;

struct node{

	char value;
	int left;
	int right;

};

node a[101];

void inorder(int id){
	
	if(a[id].left!=0){
		inorder(a[id].left);
	}
	cout<<a[id].value;
	if(a[id].right!=0){
		inorder(a[id].right);
	}

}

int main(){

	for(int t=1,n,limit,flag; t<=10; t++){
		cin >> n;
		limit=n/2;
		flag=n%2;
		for(int i=1,m,r,l;i<=n;i++){
			char c;
			cin >> m;
			cin >> c;
//			cout << limit<<flag<<m << c <<"\n";
			a[m].value=c;
			if(i<=limit){
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
			}
		}
		cout<<"#"<<t<<" ";
		inorder(1);
		cout<<"\n";
		
		


	}
	
	
	
	return 0;
}

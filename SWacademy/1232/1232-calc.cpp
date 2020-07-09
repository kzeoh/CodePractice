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

void postorder(int id){
	int temp;
	int num1;
	int num2;
	
	if(a[id].left!=0){
		postorder(a[id].left);
	}
	if(a[id].right!=0){
		postorder(a[id].right);
	}
	if(a[id].value=="+" || a[id].value=="-" || a[id].value=="*" || a[id].value=="/"){
		num2=s.top();
		s.pop();
		num1=s.top();
		s.pop();
		if(a[id].value=="+"){
			s.push(num1+num2);
		}else if(a[id].value=="-"){
			s.push(num1-num2);
		}else if(a[id].value=="*"){
			s.push(num1*num2);
		}else if(a[id].value=="/"){
			s.push(num1/num2);
		}



	}else{
		string str;
		str=a[id].value;
		temp=atoi(str.c_str());
		//cout <<temp;
		s.push((float)temp);
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
			if(str=="+"||str=="-"||str=="*"||str=="/"){
				cin>>l;
				a[m].left=l;
				cin >> r;
				a[m].right=r;
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
		postorder(1);
		cout<<s.top();
		cout<<"\n";
		
		


	}
	
	
	
	return 0;
}

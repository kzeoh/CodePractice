#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector <int> &vec,int left, int right){

	if(left>=right)
		return;
	
	int pivot = vec[left];
	
	int i = left, j = right;

	while(i<j){
		while(vec[j]>pivot){
			j--;	
		}
		while(i<j&&pivot>=vec[i]){
			i++;;
		}
		//cout<< i << j<<"\n";
		int temp = vec[j];
		vec[j]=vec[i];
		vec[i]=temp;
	}
	vec[left]=vec[i];
	vec[i]=pivot;
	
/*	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	cout<<"\n";*/
//	cout<< i<<"\n";
	quickSort(vec,left,i-1);
	quickSort(vec,i+1,right);

}

int main(){

	vector <int> vec(10,0);
	
	for(int i=0;i<vec.size();i++){
		vec[i]=rand()%100;
	}
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	cout<<"\n";

	quickSort(vec,0,vec.size()-1);

	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	cout<<"\n";

	return 0;
}

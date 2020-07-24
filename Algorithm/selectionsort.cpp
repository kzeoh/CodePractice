#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void selectionSort(vector <int> vec){
	for(int i=0;i<vec.size();i++){
		int indexMin=i;
		for(int j=i+1;j<vec.size();j++){
			if(vec[indexMin]>vec[j]){
				indexMin=j;
			}	
		}
		int temp=vec[indexMin];
		vec[indexMin]=vec[i];
		vec[i]=temp;
	}
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	cout<<"\n";
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

	selectionSort(vec);

	return 0;
}

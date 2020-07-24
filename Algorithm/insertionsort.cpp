#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void insertionSort(vector <int> vec){
	
	for(int i=1;i<vec.size();i++){
		int prev = i-1;
		int temp = vec[i];
		while(prev>=0&&temp<vec[prev]){
			vec[prev+1]=vec[prev];
			prev--;
		}
		vec[prev+1]=temp;
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

	insertionSort(vec);

	return 0;
}

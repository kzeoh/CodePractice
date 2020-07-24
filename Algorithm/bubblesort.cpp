#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void bubbleSort(vector <int> vec){

	for(int i=0;i<vec.size();i++){
		for(int j=1;j<vec.size()-i;j++){
			if(vec[j-1]>vec[j]){
				int temp=vec[j-1];
				vec[j-1]=vec[j];
				vec[j]=temp;
			}
		}
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

	bubbleSort(vec);

	return 0;
}

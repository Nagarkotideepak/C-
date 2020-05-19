//2D array using for each loop
#include<iostream>
using namespace std;
int main(){
	//initialization and declaration of 2-D Array
	int B[2][3]={2,5,9,6,9};
	//using for each loop
	cout<<"Input Elements ing 2*3 array i.e 6 elements"<<endl;
		for(auto& x:A){
		for(auto& y:x){
			cin>>y;
		}
		cout<<endl;
	}
	for(auto& x:A){//x for row taken as type reference
		for(auto& y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}

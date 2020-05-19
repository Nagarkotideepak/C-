//Basics of 2-D array
#include<iostream>
using namespace std;
int main(){
	//initialization and declaration of 2-D Array
	int A[2][3]={{2,5,9},{6,9,15},};
	
	//or
	int B[2][3]={2,5,9,6,9,15};
	
	//For Accesing 2D array
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<A[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<B[i][j];
		}
		cout<<endl;
	}
	return 0;
}

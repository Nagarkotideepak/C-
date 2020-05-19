//Adding Two Matrices
#include<iostream>
using namespace std;
int main(){
	int A[2][3]={{2,5,9},{6,9,15},};
	int B[2][3]={2,3,4,5,6,7};
	int C[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	cout<<"Matric A is: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<A[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Matrics B is: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<B[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Their Addition is :"<<endl;
		for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<C[i][j];
		}
		cout<<endl;
	}
}

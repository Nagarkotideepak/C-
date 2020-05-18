/*
    *
   ***
*/
#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"enter rows: ";
	cin>>rows;
	for(int i=1;i<=rows;i++){
		for(int k=1;k <= ((2*rows)-1);k++){
			if(k>=rows-(i-1) && k<=rows+(i-1)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		
	}
	cout<<endl;
}
	return 0;
}

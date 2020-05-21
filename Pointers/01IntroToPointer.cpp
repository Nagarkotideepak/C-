#include<iostream>
using namespace std;
int main(){
	int x=10;
	
	//Declaration of address variable(pointer)
	int *p;
	
	//Initialization of pointer
	p=&x;
	
	cout<<x<<endl; // value of x
	
	cout<<&x<<endl; // address of x
	
	cout<<p<<endl;  // address of x or content of o
	
	cout<<&p<<endl; // address of pointer p
	
	//Dereferencing 
	cout<<*p;  // value of stored in pointer(pointing)
	return 0;
}

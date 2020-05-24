#include<iostream>
using namespace std;
void display(){
	cout<<"Hello";
}
int main(){
	//declaration of function pointer
	void(*fp)();
	
	//initialization of function pointer
	fp=display;
	
	//function call with parameter
	(*fp)();
	return 0;
}

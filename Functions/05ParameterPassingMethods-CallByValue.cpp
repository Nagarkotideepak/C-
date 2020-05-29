/*
Parameter passing methods
1. Pass by value
2. Pass by address
3. Pass by reference
Three parameter passing methods are supported by C++
Pass-By-Value : values of Actual parameters are passed to formal parameters. Actual
parameters cannot be modified by function
Pass-By-Address: Address of Actual Parameters are passed to a function, formal
parameters must be pointers. Function can indirectly access actual parameters.
Pass-By-Reference: Actual parameters are passed as reference to formal parameters,
function can modify actual parameters.
*/
/*CALL BY VALUE
Program for Call by Value
• Value of actual parameters are copied in formal parameters
• If any changes done to formal parameters in function, they will not modify actual
parameters
*/
#include<iostream>
using namespace std;
void swap(int a,int b){
	//a and b are formal paramter
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=10,y=20;
	// x and y are actual parameter
	swap(x,y);
	cout<<x<<endl<<y;
	return 0;
}

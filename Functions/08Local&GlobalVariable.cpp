#include<iostream>
using namespace std;
int g=0;// Global Variable
void fun(){
	int a=6;//local variable
	g=g+a;
	cout<<g<<endl;
}
int main(){
	g=15;//local variable
	fun();
	g++;
	cout<<g;
	return 0;
}

//Function Overloading
/*
int max(int,int) or float max(int,int)
float max(float,float)
int max(int,int,int)

Return type is not considered in function overloading

*/
#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}
int add(int x,int y,int z){
	return x+y+z;
}
float add(float x,float y){
	return x+y;
}
int main(){
	int a=10,b=5,c,d;
	c=add(a,b);
	d=add(a,b,c);
	cout<<"a+b is "<<c<<endl<<"a+b+c is "<<d<<endl;
	int i=2.4f,j=3.5f,k;
	k= add(i,j);
	cout<<"k is "<<k;
	return 0;
}

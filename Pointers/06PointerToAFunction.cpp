#include<iostream>
using namespace std;
int max(int x,int y){
	return x>y?x:y;
}
int min(int x,int y){
	return x<y?x:y;
}
int main(){
	
	int (*fp)(int,int);
	
	//For calling max function
	fp=max;
	(*fp)(10,5);
	
	//For calling min function
	/*
	fp=min;
	(*fp)(10,5);
	*/
	return 0;
}

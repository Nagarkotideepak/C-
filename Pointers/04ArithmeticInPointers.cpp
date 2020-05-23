//Arithmetic Operations Performed in Pointer
#include<iostream>
using namespace std;
int main(){
	int A[5]={2,4,6,8,10};
	int *p=A;
	int *q=&A[3];
/*
Operations
1. p++ ; move to the next location
2. p-- ; move backword location
3. p = p+n ; move forward by +n location
4. p = p-2 ; move backward by nth location
5. d = q-p; distance between two pointer
*/
	cout<<*p<<endl;
	
	// increament
	p++;
	cout<<*p<<endl;
	
	// decreament
	p--;
	cout<<*p<<endl;
	
	//From one loaction to other
	cout<<p<<endl;
	for(int i=0;i<5;i++){
		//cout<<*(p+i)<<endl;// or p[i]
		cout<<*p<<endl;
		p++;
	}
	cout<<p<<endl;
	
	return 0;
}

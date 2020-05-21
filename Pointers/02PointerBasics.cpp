#include<iostream>
using namespace std;
int main(){
	// Array A in stack
	int A[5]={1,2,3,4,5};
	
	//Pointer in Stack
	int *p;
	
	//memory allocated in Heap and assigning to p
	p=new int[5];
	/* or int *p = new int[5];
	 Heap Memory must be deallocated by
	 delete[]p;
	 else cause memory leap problem.
	*/
	
	p[0]=12;
	p[1]=13;
	cout<<p[1]<<endl;
	delete []p;
	p=NULL;
	p=nullptr; // in Modern C++
}

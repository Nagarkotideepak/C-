//Linear Search Using Function
#include<iostream>
using namespace std;
int fun(int A[],int n,int key){
	for(int i=0;i<n;i++){
		if(key==A[i])
			return i;
	}
	return 0;
}
int main(){
	int n,k;
	cout<<"Enter The Number of Element to put: ";
	cin>>n;
	int A[n];
	cout<<"Input The Elements: "<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<")is : ";
		cin>>A[i];
	}
	cout<<endl;
	cout<<"Enter the number to be searched: ";
	cin>>k;
	int index=fun(A,n,k);
	cout<<"Number is found at index : "<<index<<endl;
}

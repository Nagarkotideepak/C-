//Scoping Rule in C++(Block Level Scope)
#include<iostream>
using namespace std;
int s=10; //Global Variable
int main(){
	
	int s=20;//Local Variable
	{
		int s=30;
		cout<<s<<endl;
	}
	cout<<s<<endl;
	cout<<::s<<endl; //Scope Resolution
}

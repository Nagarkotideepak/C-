/*
Function Template
• Function template are used for defining generic functions
• They work for multiple datatypes
• Datatype is decided based on the type of value passed
• Datatype is a template variable
• Function can have multiple template variables
*/
#include <iostream>
using namespace std;
template<class T>
T maxim(T a,T b)
{
return a>b?a:b;
}
int main()
{
 cout<<maxim(10,10)<<endl;
 cout<<maxim(4.3,5.4)<<endl;
 cout<<maxim(1.3f,9.6f)<<endl;
return 0;
}

/*
Default Arguments
• Parameters of a function can have default values
• If a parameter is default then , passing its value is options
• Function with default argument can be called with variable number of argument
• Default values to parameters must be given from right side parameter
• Default arguments are much useful in constructors
• Default arguments are useful for defining overloaded functions
*/
#include <iostream>
using namespace std;
int sum(int a,int b,int c=0)
{
return a+b+c;
}
int main()
{
 /*
 cout<<sum(10,10); //will give 20
 */
 cout<<sum(10,10,3)<<endl;
return 0;
}

// Program to demonstrate Call by Reference
#include <iostream>
using namespace std;
void square( double &num )
{
	num = num * num ;
}
int main ()
{
	double x = 123.456;
	
	cout << "Before function call, x = " << x << endl;
	
	square (x); // pass by refrence 
	
	cout << "After function call, x = " << x << endl;
	
	return 0; 
}

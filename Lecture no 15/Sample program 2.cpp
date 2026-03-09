// This program contains different ways to access array elements.
#include <iostream>
using namespace std;
int main ()
{
	int y[10] = { 0 , 5 , 10 , 15 , 20 , 25 , 30 , 35 , 40 , 45};
	int *yptr;
	yptr = y;
	
	cout << "Accessing 6th element of array as y[5] = " << y[5] << endl;
	cout << "Accessing 6th element of array as *( yptr + 5) = " << *( yptr + 5) << endl;
	cout << "Accessing 6th element of array as yptr[5] = " << yptr[5] << endl;
	
	return 0;
	
}

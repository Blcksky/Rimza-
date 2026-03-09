// This program steps through an array using pionter.
#include <iostream>
using namespace std;
int main ()
{
	int y[10] = { 10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};
	int*yptr , i;
	yptr = y;
	
	for (i = 0; i < 10; i++ )
	{
		cout << "\n The value of the element at position " << i << " is " << *yptr;
		yptr++;
	}
	return 0;
}

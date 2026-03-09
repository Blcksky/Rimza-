// Program using pointer arithmetic
#include <iostream>
using namespace std;
int main ()
{
	int x = 10;
	int *yptr;
	
	yptr = &x;
	
	cout << "The address yptr points to = " << yptr << endl;
	cout << "The content yptr points to = " << *yptr << endl;
	
	( *yptr )++;
	
	cout << "After increment, the contents are " << *yptr << endl;
	cout << "The value of x is = " << x << endl;
	return 0;
}

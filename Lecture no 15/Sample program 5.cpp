// Program using the pointer subtraction 
#include <iostream>
using namespace std;
int main ()
{
	int y[10] , *ptr1 , *ptr2;
	
	ptr1 = &y[0];
	ptr2 = &y[3];
	
	cout << "The difference is = " << ptr2 - ptr1;
	return 0;
}

// Program using the dereference pointer comparison
#include <iostream>
using namespace std;
int main ()
{
	int x , y , *ptr1 , *ptr2;
	
	cout << "Enter the value of x = ";
	cin >> x;
	
	cout << "Enter the value of y = ";
	cin >> y;
	
	ptr1 = &x;
	ptr2 = &y;
	
	if ( *ptr1 > *ptr2 )
	{
		cout << "x is greater than y";
	}
	else 
		cout << "y is greater than x";
	
	return 0;
}

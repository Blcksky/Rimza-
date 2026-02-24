// This program calculates the sum of squares of numbers stored in an array
#include <iostream>
using namespace std;
int main ()
{
	int arr[10];
	int sum = 0;
	
	cout << "Enter 10 numbers: " << endl;
	
	for ( int i = 0; i < 10; i++ )
	{
		cin >> arr[i];
	}
	for ( int i = 0; i < 10; i++ )
	{
		sum = sum + ( arr[i] * arr[i] );
	}
	cout << "Sum of squares = " << sum;
	return 0;
}

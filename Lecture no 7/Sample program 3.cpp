///This program displays the sum of squares of integers from 1 to n
#include <iostream>
using namespace std;
int main ()
{
	int n , sum = 0;
	
	cout << "Enter a positive number: " << endl;
	cin >> n;
	
	for ( int i = 1 ; i <= n ; i++)
	{
		sum = sum +( i * i );
	}
	cout << "Sum of square from 1 to " << n << " is " << sum;
	return 0;
}

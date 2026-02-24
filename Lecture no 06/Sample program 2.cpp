// This program calculates sum of even numbers for a given upper limit of integers.
#include <iostream>
using namespace std;
int main ()
{
	int sum = 0 , num = 1 , upperLimit;
	
	cout << "Enter the limit for which you want the sum " << endl;
	cin >> upperLimit;
	
	while ( num <= upperLimit )
	{
		if ( num % 2 == 0)
		{
			sum = sum + num ;
		}
		num++;
	}
	cout << "The sum of even numbers of first " << upperLimit << " integers starting from 1 is " << sum;
	return 0;
}

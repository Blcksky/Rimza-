// This program calculates the sum of first 1000 integers.
#include <iostream>
using namespace std;
int main ()
{
	int sum = 0;
	int num = 1;
	
	while ( num <= 1000 )
	{
		sum = sum + num;
		num++;
	}
	cout << "Sum of first 1000 integers is " << sum << endl;
	return 0;
}

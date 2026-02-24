// This program reads the input from user and store it into an array and stop at -1. 
#include <iostream>
using namespace std;
int main ()
{
	int  a[100];
	int c , i = 0;
	do 
	{
		cout << "Enter the number (-1 to end input )" << endl;
		cin >> c;
		if ( c != -1 && i < 100 )
		{
			a[i] = c;
		}
		i++;
	}
	while ( c != -1 && i < 100 );
		cout << "The total number of integers entered by user (excluding -1) is " << i - 1;
	return 0;
}

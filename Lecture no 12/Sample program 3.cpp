#include <iostream>
using namespace std;
int main ()
{
	int a[2][3] , i , j ;
	
	for ( i = 0; i <= 1 ; i++ )
	{
		for ( j = 0 ; j <= 2 ; j++ )
		{
			cout << "Enter a value for position[" << i << "," << j << "]: ";
			cin >> a[i][j];
		}
	}
	
	cout << "\nThe value enterd for the matrix are " << endl;
		for ( i = 0; i <= 1 ; i++ )
	{
		for ( j = 0 ; j <= 2 ; j++ )
		{
			cout <<  a[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}

// This program uses array manipulation using indexing 
#include <iostream>
using namespace std;
int main ()
{
	int multi[5][10];
	int *ptr;
	ptr = *multi;
	
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 10; j++ )
		{
			multi[i][j] = i * j;
		}
	}
	
	cout << "\n Array manipulated using indexing is: \n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++ )
		{
			cout << multi[i][j] << '\t';
		}
		cout << '\n';
	}
	
	cout << "\n Array manipulated using pointer is: \n";
	for ( int k = 0; k < 50; k++)
	{
		cout << *ptr << " " << '\t';
		ptr++;
	}
	return 0;
}

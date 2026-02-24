// This program takes an integer intput from user and displays its table.
// The table is displayed up to the multiplier entered by the user.
#include <iostream>
using namespace std;
int main ()
{
	int x , num , maxNum;	
	cout << "Enter a number for which you want a table" << endl;
	cin >> num;
	
	cout << "Enter the limit (how far the table should go ): " << endl;
	cin >> maxNum;
	
	cout << "\n---Multiplication table of " << num << "---\n" << endl; 
	
	for ( x = 1 ; x <= maxNum ; x++ )
	{
		cout << num << " x " << x << " = " << num * x << endl;
	}
	return 0;
}

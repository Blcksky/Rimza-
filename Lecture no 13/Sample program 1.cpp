/* Array Manipulation - Flipping of a Matrix (reversing the row order): This program reads a
matrix (two-dimensional array), displays its contents and also displays the flipped matrix
*/ 
#include <iostream>
using namespace std;
const int rows = 3; 
const int cols  = 3;
void readMatrix(int a[][cols])
{
	for ( int i = 0; i < rows; i++ )
	{
		for ( int j = 0; j < cols; j++)
		{
			cout << "Enter element [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	
}
void displayMatrix(int a[][cols])
{
	for ( int i = 0; i < rows; i ++ )
	{
		for ( int j = 0; j <  cols; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	
}
void displayFlippedMatrix(int a[][cols])
{
	// loop is working in reverse 
	for ( int i = rows - 1; i >= 0; i--)
	{
		for ( int j = 0; j < cols; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	
}
int main ()
{
	int a[rows][cols];
	cout << "Enter the elements of 3 x 3 matrix : " << endl;
	readMatrix(a);
	
	cout << "\nOrignal Matirx:" << endl;
	displayMatrix(a);

    cout << "\nFlipped Matrix (Vertical Reverse):" << endl;
    displayFlippedMatrix(a);

    return 0;
}

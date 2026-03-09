/*Array Manipulation - Transpose of a Square Matrix: 
This program reads a matrix(two dimensional arrray), displays its contents,
transposes it and then displays the transported matrix*/
#include <iostream>
using namespace std;
const int arraySize = 3;

void readMatrix(int a[][arraySize])
{
    for (int i = 0; i < arraySize; i++)
    {
        for ( int j = 0; j < arraySize; j++)
        {
            cout << '\n' << "Enter a value for position " << i << " , " << j << " elements: ";
            cin >> a[i][j];
        }
        cout <<"\n";
    }
}
void displayMatrix(int a[][arraySize])
{
    for ( int i = 0; i < arraySize; i++)
    {
        for ( int j = 0; j < arraySize; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
void transposeMatrix(int a[][arraySize])
{
    int temp;
    for ( int i = 0; i < arraySize; i++)
    {
        for ( int j = i + 1; j < arraySize; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}
int main ()
{
    int a[arraySize][arraySize];
    readMatrix(a);

    // display the matrix
    cout <<"\n\n" << "The orignal matrix is: " << '\n';
    displayMatrix(a);

    // transpose of matrix
    transposeMatrix(a);

    // display the transposed matrix
    cout << "\n\n" << "The transposed matrix is: " << '\n';
    displayMatrix(a);

    return 0;

}

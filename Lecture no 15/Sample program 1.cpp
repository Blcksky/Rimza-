// This program will print the memory address of a pointer and its incremented address.
#include <iostream>
using namespace std;
int main()
{
    int y[10];
    int *yptr;
    yptr = y;

    // printing the memory address
    cout << "The memory address of ptr = "<< yptr << endl;
    yptr++;

    // printing the incremented memory address
    cout << "The memory address after incrementing ptr = " << yptr << endl;
    return 0;
}

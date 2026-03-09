/*This program uses bubble sorting to sort a given array.
we use swap function to interchange the values by using pointers
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
void performSwap( int * x , int * y)
{
    int temp;
    if ( *x > *y )
    {
         temp = *x;
         *x = *y;
         *y = temp;
    }
}
int main ()
{
    int x[] = { 1, 3, 5 , 7 , 9 , 2 , 4 , 6 , 8 , 10};
    int n = 10;

    int swapsMade;

    for ( int i = 0; i < n - 1; i++ )
    {
        swapsMade = 0; 
        for ( int j = 0; j < n - 1 - i; j++ )
        {
            if ( x[j] > x[j+1] )
            {
                swapsMade++;
                performSwap ( &x[j] , &x[j+1] );
            }
        }
        for ( int k = 0; k < n; k++ )
            cout << x[k] << '\t';
        cout << endl;
        if ( swapsMade == 0 )
            break;
    }
    return 0;
}

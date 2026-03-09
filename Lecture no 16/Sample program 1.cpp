// this program uses the mutli-dimensional array name as pointer
#include <iostream>
using namespace std;
int main ()
{
	int multi[5][10];
	
	cout << "The value of multi is: " << multi << endl;
	cout << "The value of *multi is: " << *multi << endl;
	return 0; 
}

// this program copies a character array into a given array
#include <iostream>
using namespace std;
int main ()
{
	char str1[80] = "A test string";
	char str2[80] ;
	
	char *ptr1;
	char *ptr2;
	
	ptr1 = str1;
	ptr2 = str2;
	
	while ( *ptr1 != '\0')
	{
		*ptr2++ = *ptr1++;
	}
	
	*ptr2 = '\0';
	
	cout << "String in str1 = " << str1 << endl;
	cout << "String in str2 = " << str2 << endl;
	return 0;
}

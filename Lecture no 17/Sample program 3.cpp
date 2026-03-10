// Program to display the operation of strcpy() and strncpy()
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char string1[15] = "String1";
	char string2[15] = "string2";
	char string3[15];
	
	cout << "Before copying : " << endl;
	cout << "String 1 : \t" << string1 << endl;
	cout << "String 2 : \t" << string2 << endl;
	
	strcpy(string2 , string1);
	
	cout << "After copying : " << endl;
	cout << "String 1 : \t" << string1 << endl;
	cout << "String 2 : \t" << string2 << endl;
	
	strncpy( string3 , string1 , 3);
	string3[3] = '\0';
	cout << "strncpy( string3 , string1 , 3) =  " << string3;
	 
	
	return 0;
}

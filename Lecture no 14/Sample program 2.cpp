// This program converts a string into an uppercase string.
#include <iostream>
using namespace std;

void convertToUppercase( char * sptr)
{
    while ( *sptr != '\0')
    {
        if ( islower ( *sptr ))
            *sptr = toupper ( *sptr);
            ++sptr;
    }
}
int main()
{
    char s[30] = "Welcome To Virtual University";
    cout << "The string before conversion is: " << s << endl;

    convertToUppercase(s);
    cout << "The string after conversion is: " << s;
    return 0;
}

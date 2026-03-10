// this program displays the ASCII code table
#include <iostream>
using namespace std;
int main()
{
	char c;
	for ( int i = 0; i < 256; i++)
	{
		c = i;
		cout << i << "\t" << c << "\n";
	}
	return 0;
}

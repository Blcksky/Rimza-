// Following program takes the radius of a circle from the user and calculates the diameter, circumference and area of circle and displays the result.
#include <iostream>
using namespace std;
int main ()
{
	float radius, diameter, circumference , area;
	
	// get the value of radius from the user 
	cout << "Enter the radius of circle ";
	cin >> radius;
	
	// perform mathematical calculations 
	diameter = radius * 2;
	circumference = 2 * 3.14 * radius;
	area = 3.14 * radius * radius ;
	
	// display ther results
	cout << "Diameter of circle is " << diameter << endl;
	cout << "Circumference of circle is " << circumference << endl;
	cout << "Area of circle is " << area << endl;
	
	return 0;
	
}

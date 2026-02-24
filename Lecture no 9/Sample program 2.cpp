// This program calculates the area of a ring 
#include <iostream>
using namespace std;
double circleArea (double radius)         // function to calculate area of circle 
{
	const double PI = 3.1415926;
	return PI * radius * radius;
}
int main ()
{
	double outerRadius , innerRadius , ringArea;
	
	cout << "Enter the outer radius: " ;
	cin >> outerRadius;
	
	cout << "Enter the inner radius: ";
	cin >> innerRadius;
	
	// checks if outer radius is greater 
	if ( outerRadius > innerRadius )
	{
		ringArea = circleArea( outerRadius ) - circleArea( innerRadius );
		cout << "Area of the ring is: " << ringArea << endl;
	}
	else
	{
		cout << "Error: Outer radius must be greater than inner radius" << endl;
	}
	return 0;
}

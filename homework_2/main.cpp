// includes
#include <iostream>
#include <math.h>
#include "Rectangle.cpp"
#include "Circle.cpp"

// namespaces
using namespace std;

// constants
const double pi = M_PI;

/*

 Circle
 Area = pi*r^2
 Circumference = 2*pi*r

 Rectangle
 Area = a * b
 Circumference = 2*a + 2*b
 */

int main() {
	
	Rectangle rectangle(6, 12);
	Circle circle(4, pi);
	
	cout << rectangle.a << "\n";
	cout << rectangle.b << "\n";
	
	cout << circle.r << "\n";
	cout << circle.pi << "\n";
	
}

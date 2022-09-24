// includes
#include <iostream>
#include <math.h>
#include "Rectangle.cpp"
#include "Circle.cpp"
#include "calc.cpp"

// namespaces
using namespace std;
using namespace calc;

// constants
const double pi = M_PI;

void print(string text, double variable) {
	cout << text << variable << endl;
}

int main() {
	// create rectangle and circle
	Rectangle rectangle(6, 12);
	Circle circle(4, pi);
	
	// print values
	print("rectangleArea: ", getArea(rectangle));
	print("rectanglePerimeter: ", getPerimeter(rectangle));
	cout << endl;
	print("circleArea: ", getArea(circle));
	print("circlePerimeter: ", getPerimeter(circle));
}

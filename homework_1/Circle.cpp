// Circle
// Area = pi*r^2
// Circumference = 2*pi*r

struct Circle {
	double r;
	double pi;
	
	explicit Circle(double r, double pi) {
		this -> r = r;
		this -> pi = pi;
	}
};
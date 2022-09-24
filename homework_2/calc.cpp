namespace calc {
	double getArea(Rectangle rectangle) {
		return rectangle.a * rectangle.b;
	}
	
	double getArea(Circle circle) {
		return circle.pi * (circle.r * circle.r);
	}
	
	double getPerimeter(Rectangle rectangle) {
		return 2 * rectangle.a + 2 * rectangle.b;
	}
	
	double getPerimeter(Circle circle) {
		return 2 * circle.pi * circle.r;
	}
}
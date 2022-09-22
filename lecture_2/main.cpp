#include <iostream>

using namespace std;


void add(int a, int b) {
	cout << a + b << endl;
}

void add(double a, double b) {
	cout << a + b << endl;
}

void printName(string name = "name") {
	cout << name << endl;
}

int main() {
//	char a;
//	short b;
//	int c;
//	float d;
//	double e;
//	double * pointer;
//
//	enum Stav {
//		pritomen,
//		nepritomen,
//		opozden
//	};
//
//	Stav p = pritomen;
//	cout << p << endl;
//	cout << "hello" << endl;
	
	
	// struct
	struct Student {
		int age;
		string name;

//		explicit Student(int age) {
//			this -> age = age;
//		};
	};
	
	Student s1;
	Student s2;
	
	cout << sizeof s1 << endl;
	cout << sizeof s2 << endl;
	
	// auto
	int a = 7;
	int b = 8.0;
	auto ab = 7;
	auto bb = 8.0f;
	auto student = Student();
	
	add(2, 4);
	add(5.2, 3.2);
	
	printName("Petr");
	printName();
	
}

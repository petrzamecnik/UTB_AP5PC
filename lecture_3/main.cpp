#include <iostream>
#include "stdio.h"

using namespace std;


class MultiSetter {
	int _a;
	int _b;
	int _c;

public:
	MultiSetter *setA(int n) {
		_a = n;
		return this;
	}
	
	MultiSetter *setB(int n) {
		_b = n;
		return this;
	}
	
	MultiSetter *setC(int n) {
		_c = n;
		return this;
	}
	
	
};

class Person {
private:
	const char *_name;

public:
	explicit Person(const char *name) : _name(name) {}
	
	// if copy constructor is used, also default constructor has to be used
	Person(const Person &p) {
		cout << "explicit copy constructor called" << endl;
	}
	
	void printName() {
		cout << _name << endl;
	}
	
};

class MyVector {
public:
	int *_nums;
	size_t _length;
	
	explicit MyVector(int *nums, size_t length) : _nums(nums), _length(length) {
		_length = _length;
		_nums = new int[_length];
		
		for (int i = 0; i < _length; ++i) {
			_nums[i] = _nums[i];
			
		}
	}
	
	MyVector(MyVector &from) {
		_length = from . _length;
		_nums = new int[from . _length];
		
		for (int i = 0; i < _length; ++i) {
			_nums[i] = from . _nums[i];
			
		}
	}
	
	void printNums() const {
		for (int i = 0; i < _length; ++i) {
			cout << _nums[i] << endl;
			
		}
	}
	
	~MyVector() {
		// delete variable
		// delete array[]
		delete[] _nums;
	}
};


int main() {
	MultiSetter s;
	s . setA(5) -> setB(4) -> setC(3);
	
	Person p1("Adam");
	Person p2 = p1;
	
	p1 . printName();
	p2 . printName();
	
	
	int nums[] = {1, 2, 3};
	MyVector vector1(nums, 3);
	nums[0] = 8;
	vector1 . printNums();
	
	MyVector vector2 = vector1;
	nums[0] = 7;
	vector2 . printNums();
	
	
	return 0;
}

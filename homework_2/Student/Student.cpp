//
// Created by a_ulrich on 29.09.2022.
//

#include "Student.h"


// this example function is tested in test/test.cpp, check if is passing
int Student::getNumberSeven() {
	return 7;
}

Student::Student(int id, const char *name, int birthYear) {
	_id = id;
	_name = name;
	_birthYear = birthYear;
}

int Student::getId() {
	return _id;
}

const char *Student::getName() {
	return _name;
}

int Student::getBirthYear() {
	return _birthYear;
}

void Student::setName(const char *name) {
	_name = name;
}

void Student::setBirthYear(int birthYear) {
	int newBirthYear = birthYear;
	
	if (newBirthYear > 2022) {
		newBirthYear = 2022;
	}
	
	_birthYear = newBirthYear;
}

void Student::printName() {
	cout << _name;
}

// TODO: implement this
int Student::getPrivateHashIdOfFriendClass(FriendClass &f) {
	return f.hashId;
}




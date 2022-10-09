//
// Created by a_ulrich on 29.09.2022.
//

#ifndef UNTITLED1_STUDENT_H
#define UNTITLED1_STUDENT_H

#include <iostream>

using namespace std;

class FriendClass {
    int hashId = 123456;
};

class Student {
private:
    int _id;
    const char *_name;
    int _birthYear;

public:
    // example, with passing test for you, check Student.cpp for definition and test/test.cpp for test definition
    static int getNumberSeven();

    // TODO: implement Student logic in Student.cpp (with private fields in Student.h) according to these public methods:

    Student(int id, const char *name, int birthYear);

    int getId();

    const char *getName();

    int getBirthYear();

    void setName(const char *name);

    //if I try to set birthYear > 2022, set it to 2022
    void setBirthYear(int birthYear);

    // this function should print only name (without \n)
    void printName();

    // this function returns hash id of FriendClass (defined above)
    int getPrivateHashIdOfFriendClass(FriendClass &f);

    
};


#endif //UNTITLED1_STUDENT_H

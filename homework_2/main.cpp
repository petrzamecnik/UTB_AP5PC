#include <iostream>
#include "Student/Student.h"

using namespace std;

int main() {
    // here you can dummy test your student class
    Student s(1, "Petr", 2000);
    Student s2(2, "Dave", 2002);
    
    cout << "test" << endl;
    cout << s.getId() << endl;
    cout << s.getName() << endl;
    cout << s.getBirthYear() << endl;
    
    s. setName("Peter");
    cout << s.getName() << endl;
    
    s. setBirthYear(2005);
    cout << s.getBirthYear() << endl;
    
    s. setBirthYear(2050);
    cout << s.getBirthYear() << endl;
    
    s.printName();
    cout << endl;
    s2.printName();
    return 0;
}

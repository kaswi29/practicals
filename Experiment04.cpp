#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void show() { cout << "Name: " << name << endl; }
};

class Student : public Person {
public:
    int roll;
};

class GraduateStudent : public Student {
public:
    void display() {
        show();
        cout << "Roll: " << roll;
    }
};

int main() {
    GraduateStudent g;
    g.name = "Aman";
    g.roll = 101;
    g.display();

    return 0;
}
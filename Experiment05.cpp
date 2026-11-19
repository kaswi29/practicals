#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
public:
    float area() { return 3.14 * 2 * 2; }
};

class Rectangle : public Shape {
public:
    float area() { return 4 * 5; }
};

int main() {
    Shape *s;
    Circle c;
    Rectangle r;

    s = &c;
    cout << "Circle area = " << s->area() << endl;

    s = &r;
    cout << "Rectangle area = " << s->area();

    return 0;
}
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;

    c3.display();
    cout << "\nSum = " << add(10, 20);

    return 0;
}
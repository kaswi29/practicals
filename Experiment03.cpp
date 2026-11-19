#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Default\n"; }
    Demo(int x) { cout << "Parameterized\n"; }
    Demo(const Demo&) { cout << "Copy\n"; }
    Demo(Demo&&) noexcept { cout << "Move\n"; }

    ~Demo() { cout << "Destructor\n"; }
};

int main() {
    Demo a;
    Demo b(10);
    Demo c(a);
    Demo d(move(b));

    return 0;
}
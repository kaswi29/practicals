#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    void display() {
        cout << "Balance = " << balance;
    }
};

int main() {
    BankAccount b;
    b.setBalance(5000);
    b.display();

    return 0;
}
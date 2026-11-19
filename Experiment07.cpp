#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top = -1;

public:
    void push(T x) {
        arr[++top] = x;
    }

    void pop() {
        cout << arr[top--] << endl;
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.pop();

    Stack<float> s2;
    s2.push(5.5);
    s2.pop();

    Stack<string> s3;
    s3.push("Hello");
    s3.pop();

    return 0;
}
#include <iostream>
using namespace std;

class Stack {
private:
    int top, arr[100];

public:
    // Constructor using your requested style
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(int x) {
        if (!isFull())
            arr[++top] = x;
        else
            cout << "Stack Overflow\n";
    }

    int pop() {
        if (!isEmpty())
            return arr[top--];
        else {
            cout << "Stack Underflow\n";
            return -1;
        }
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[top];
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;

    cout << "Top element after popping: " << s.peek() << endl;

    if (s.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}

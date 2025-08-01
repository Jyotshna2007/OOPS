#include <iostream>
using namespace std;

class queue {
private:
    int front, rear, arr[100];

public:
    queue() {
        front = rear = -1;
    }

    bool isempty() {
        return front == -1 || front > rear;
    }

    bool isfull() {
        return rear == 99;
    }

    void enqueue(int val) {
        if (isfull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = val;  // ✅ Your enqueue style
    }

    int dequeue() {
        if (isempty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        return arr[front++];
    }

    int peek() {
        return (isempty()) ? -1 : arr[front];
    }
};

int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.peek() << endl;  // 10
    q.dequeue();
    cout << q.peek() << endl;  // 20

    return 0;
}

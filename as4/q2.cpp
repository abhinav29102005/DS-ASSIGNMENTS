#include <iostream>
#define C_SIZE 5
using namespace std;
class CQueue {
private:
    int arr[C_SIZE];
    int front, rear;

public:
    CQueue() : front(-1), rear(-1) {}

    void cEnq(int val) {
        if (isFull()) {
            cout << "Circular Queue is full (Overflow).\n";
            return;
        }
        if (isEmpty()) front = 0;
        rear = (rear + 1) % C_SIZE;
        arr[rear] = val;
        cout << val << " enqueued.\n";
    }

    int cDeq() {
        if (isEmpty()) {
            cout << "Circular Queue is empty (Underflow).\n";
            return -1;
        }
        int val = arr[front];
        if (front == rear) { // Last element
            front = rear = -1;
        } else {
            front = (front + 1) % C_SIZE;
        }
        return val;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % C_SIZE == front;
    }

    void display() {
        if (isEmpty()) {
            cout << "Circular Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % C_SIZE;
        } while (i != (rear + 1) % C_SIZE);
        cout << "\n";
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty, peek failed.\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    CQueue q;
    int choice, val;

    do {
        cout << "\nghuma hua queue\n";
        cout << "1. enqueue()\n2. dequeue()\n3. isempty()\n4. isfull()\n5. display()\n6. peek()\n7. exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; q.cEnq(val); break;
            case 2: val = q.cDeq(); if (val != -1) cout << "Dequeued value: " << val << "\n"; break;
            case 3: cout << (q.isEmpty() ? "Queue is empty." : "Queue is NOT empty.") << "\n"; break;
            case 4: cout << (q.isFull() ? "Queue is full." : "Queue is NOT full.") << "\n"; break;
            case 5: q.display(); break;
            case 6: val = q.peek(); if (val != -1) cout << "Front element: " << val << "\n"; break;
            case 7: cout << "Exiting.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 7);
    return 0;
}
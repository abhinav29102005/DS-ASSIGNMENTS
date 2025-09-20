#include <iostream>
#define Q_SIZE 10
using namespace std;
class SQueue {
private:
    int arr[Q_SIZE];
    int front, rear;

public:
    SQueue() : front(-1), rear(-1) {}

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is full (Overflow).\n";
            return;
        }
        if (isEmpty()) front = 0;
        arr[++rear] = val;
        cout << val << " enqueued.\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty (Underflow).\n";
            return -1;
        }
        int val = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return val;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == Q_SIZE - 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
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
    SQueue q;
    int choice, val;

    do {
        cout << "\nAALA RE AALA MENU AALA\n";
        cout << "1. enqueue()\n2. dequeue()\n3. isempty()\n4. isfull()\n5. disp()\n6. peek()\n7. exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; q.enqueue(val); break;
            case 2: val = q.dequeue(); if (val != -1) cout << "Dequeued value: " << val << "\n"; break;
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
#include <iostream>
#define MAX_SIZE 10

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int val) {
        if (isFull()) {
            std::cout << "Stack Overflow.\n";
            return;
        }
        arr[++top] = val;
        std::cout << val << " pushed to stack.\n";
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow.\n";
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return;
        }
        std::cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty, peek failed.\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    using namespace std;
    Stack s;
    int choice, val;

    do {
        cout << "\nSTACK MENU\n";
        cout << "1. push()\n2. pop()\n3. isEmpty()\n4. isFull()\n5. display()\n6. peek()\n7. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; s.push(val); break;
            case 2: val = s.pop(); if (val != -1) cout << "Popped value: " << val << "\n"; break;
            case 3: cout << (s.isEmpty() ? "Stack is empty." : "Stack is NOT empty.") << "\n"; break;
            case 4: cout << (s.isFull() ? "Stack is full." : "Stack is NOT full.") << "\n"; break;
            case 5: s.display(); break;
            case 6: val = s.peek(); if (val != -1) cout << "Top element: " << val << "\n"; break;
            case 7: cout << "Exiting.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 7);
    return 0;
}
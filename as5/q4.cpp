#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Node {
    int data;
    Node* next;
};
void display(Node* head) {
    Node* curr = head;
    if (curr == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    cout << "List: ";
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}
Node* revList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int mainQ4() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
    
    cout << "Input: ";
    display(head);
    
    head = revList(head);
    
    cout << "Output: ";
    display(head);

    return 0;
}
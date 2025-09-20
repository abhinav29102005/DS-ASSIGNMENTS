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
int findMid(Node* head) {
    if (head == nullptr) return -1;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, nullptr}}}}} ;
    
    cout << "List: ";
    display(head);
    
    int middle = findMid(head);
    
    cout << "Output: " << middle << endl;

    return 0;
}
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
void cntDel(Node** head, int key) {
    int count = 0;
    Node* dummy = new Node;
    dummy->next = *head;
    Node* prev = dummy;
    Node* curr = *head;

    while (curr != nullptr) {
        if (curr->data == key) {
            count++;
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    *head = dummy->next;
    delete dummy;
    
    cout << "Count: " << count << endl;
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{1, new Node{2, new Node{1, new Node{3, new Node{1, nullptr}}}}}}};
    int key = 1;
    
    cout << "Original List: ";
    display(head);

    cntDel(&head, key);
    
    cout << "Updated List: ";
    display(head);

    return 0;
}
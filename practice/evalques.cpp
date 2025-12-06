#include<bits/stdc++.h>
using namespace std;
struct Node {
    char key[50];    
    Node *left;
    Node *right;
};
Node* createnode(const char s[]) {
    Node* node = new Node;
    strcpy(node->key, s);
    node->left = node->right = NULL;
    return node;
}
void insert(Node* &root, const char s[]) {
    if (root == NULL) {
        root = createnode(s);
        return;
    }
    Node* cur = root;
    while (true) {
        int cmp = strcmp(s, cur->key);

        if (cmp < 0) {                      
            if (cur->left == NULL) {
                cur->left = createnode(s);
                break;
            } else {
                cur = cur->left;
            }
        } else if (cmp > 0) {              
            if (cur->right == NULL) {
                cur->right = createnode(s);
                break;
            } else {
                cur = cur->right;
            }
        } else {
            break;
        }
    }
}
Node* findsibling(Node* root, const char key[]) {
    Node* parent = NULL;
    Node* cur = root;
    while (cur != NULL) {
        int cmp = strcmp(key, cur->key);
        if (cmp == 0) {
            break;           
        }
        parent = cur;
        if (cmp < 0)
            cur = cur->left;
        else
            cur = cur->right;
    }
    if (cur == NULL || parent == NULL) {
        return NULL;
    }
    if (parent->left == cur)
        return parent->right;
    else
        return parent->left;
}
int main() {
    Node* root = NULL;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; ++i) {
        char buf[50];
        cin >> buf;
        insert(root, buf);
    }
    char query[50];
    cout << "Enter key to find its sibling: ";
    cin >> query;
    Node* sib = findsibling(root, query);
    if (sib == NULL) {
        cout << "No sibling found.\n";
    } else {
        cout << "Sibling of \"" << query << "\" is: " << sib->key << "\n";
    }
    return 0;
}
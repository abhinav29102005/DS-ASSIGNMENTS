#include <bits/stdc++.h>
using namespace std;
static int idx = -1;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(vector<int>& array) {
    idx++;
    if (idx >= (int)array.size()) return NULL;
    if (array[idx] == -1) return NULL;
    Node* root = new Node(array[idx]);
    root->left = buildTree(array);
    root->right = buildTree(array);
    return root;
}
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelorder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cout << endl;
    }
}
vector<int> iterpreorder(Node* root) {
    vector<int> preorder;
    if (!root) return preorder;
    stack<Node*> st;
    st.push(root);
    while (!st.empty()) {
        Node* curr = st.top();
        st.pop();
        preorder.push_back(curr->data);
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
    }
    return preorder;
}
vector<int> iterinorder(Node* root) {
    vector<int> inorder;
    stack<Node*> st;
    Node* curr = root;
    while (curr || !st.empty()) {
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        inorder.push_back(curr->data);
        curr = curr->right;
    }
    return inorder;
}
vector<int> iterpostorder(Node* root) {
    vector<int> postorder;
    if (!root) return postorder;
    stack<Node*> s1, s2;
    s1.push(root);
    while (!s1.empty()) {
        Node* curr = s1.top();
        s1.pop();
        s2.push(curr);
        if (curr->left) s1.push(curr->left);
        if (curr->right) s1.push(curr->right);
    }
    while (!s2.empty()) {
        postorder.push_back(s2.top()->data);
        s2.pop();
    }
    return postorder;
}
int main() {
    vector<int> array = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(array);
    cout << "Recursive Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Recursive Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Recursive Postorder: ";
    postorder(root);
    cout << endl;
    cout << "\nLevel Order:\n";
    levelorder(root);
    vector<int> ipre = iterpreorder(root);
    cout << "\nIterative Preorder: ";
    for (int x : ipre) cout << x << " ";
    cout << endl;
    vector<int> iin = iterinorder(root);
    cout << "Iterative Inorder: ";
    for (int x : iin) cout << x << " ";
    cout << endl;
    vector<int> ipost = iterpostorder(root);
    cout << "Iterative Postorder: ";
    for (int x : ipost) cout << x << " ";
    cout << endl;
    return 0;
}
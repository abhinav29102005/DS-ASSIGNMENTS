#include <bits/stdc++.h>
using namespace std;
vector<int> next_greater_bruteforce(const vector<int>& arr) {
    int n = (int)arr.size();
    vector<int> res(n, -1);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[i]) {
                res[i] = arr[j];
                break;
            }
        }
    }
    return res;
}
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int v=0): val(v), next(nullptr) {}
};
ListNode* detect_cycle_bruteforce(ListNode* head) {
    unordered_set<ListNode*> visited;
    ListNode* cur = head;
    while (cur) {
        if (visited.find(cur) != visited.end()) return cur;
        visited.insert(cur);
        cur = cur->next;
    }
    return nullptr;
}

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int k): key(k), left(nullptr), right(nullptr) {}
};
TreeNode* delete_leaves(TreeNode* root) {
    if (!root) return nullptr;
    root->left = delete_leaves(root->left);
    root->right = delete_leaves(root->right);
    if (!root->left && !root->right) {
        delete root;
        return nullptr;
    }
    return root;
}
TreeNode* bst_insert(TreeNode* root, int key) {
    if (!root) return new TreeNode(key);
    if (key < root->key) root->left = bst_insert(root->left, key);
    else root->right = bst_insert(root->right, key);
    return root;
}
void inorder_print(TreeNode* root) {
    if (!root) return;
    inorder_print(root->left);
    cout << root->key << ' ';
    inorder_print(root->right);
}
int main() {
    vector<int> arr = {2,1,2,4,3};
    auto res = next_greater_bruteforce(arr);
    cout << "Next greater (bruteforce): ";
    for (int x : res) cout << x << ' ';
    cout << '\n';
    ListNode* A = new ListNode(1);
    ListNode* B = new ListNode(2);
    ListNode* C = new ListNode(3);
    ListNode* D = new ListNode(4);
    A->next = B; B->next = C; C->next = D; D->next = B;
    ListNode* cycleNode = detect_cycle_bruteforce(A);
    if (cycleNode) cout << "Cycle detected at node with value: " << cycleNode->val << '\n';
    else cout << "No cycle detected\n";

    TreeNode* root = nullptr;
    root = bst_insert(root, 15);
    root = bst_insert(root, 10);
    root = bst_insert(root, 20);
    root = bst_insert(root, 18);
    root = bst_insert(root, 25);
    cout << "Inorder before deleting leaves: ";
    inorder_print(root); cout << '\n';
    root = delete_leaves(root);
    cout << "Inorder after deleting leaves: ";
    inorder_print(root); cout << '\n';
    return 0;
}
#include <iostream>
#include <list>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

Node *newNode(int val)
{
    return new Node(val);
}

void storeInorder(Node *root, list<int> &l)
{
    if (!root)
        return;
    storeInorder(root->left, l);
    l.push_back(root->data);
    storeInorder(root->right, l);
}

list<int> mergeLists(list<int> &a, list<int> &b)
{
    list<int> result;
    auto i = a.begin(), j = b.begin();

    while (i != a.end() && j != b.end())
    {
        if (*i < *j)
            result.push_back(*i++);
        else
            result.push_back(*j++);
    }

    while (i != a.end())
        result.push_back(*i++);
    while (j != b.end())
        result.push_back(*j++);

    return result;
}

Node *sortedListToBST(list<int> &l, list<int>::iterator &it, int n)
{
    if (n <= 0)
        return nullptr;

    Node *left = sortedListToBST(l, it, n / 2);

    Node *root = newNode(*it);
    ++it;
    root->left = left;
    root->right = sortedListToBST(l, it, n - n / 2 - 1);

    return root;
}
Node *mergeBSTs(Node *root1, Node *root2)
{
    list<int> list1, list2;
    storeInorder(root1, list1);
    storeInorder(root2, list2);
    list<int> merged = mergeLists(list1, list2);
    auto it = merged.begin();
    return sortedListToBST(merged, it, merged.size());
}

void printInorder(Node *root)
{
    if (!root)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main()
{

    Node *root1 = newNode(3);
    root1->left = newNode(1);
    root1->right = newNode(5);

    Node *root2 = newNode(4);
    root2->left = newNode(2);
    root2->right = newNode(6);

    Node *mergedRoot = mergeBSTs(root1, root2);

    cout << "Inorder Traversal of Merged Balanced BST: ";
    printInorder(mergedRoot);
    cout << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data = val;
    left = right = nullptr;
  }
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
  idx ++;
  if( preorder[idx] == -1) {return nullptr;}
  Node* root = new Node(preorder[idx]);
  root->left = buildTree(preorder);
  root->right=buildTree(preorder);
  return root;
}
int main(){
  vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(preorder);
  cout<<root->data<<endl;
  cout<<root->left->data<<endl;
  cout<<root->right->data<<endl;
  cout<<root->left->left->data<<endl;
  cout<<root->left->right<<endl;
  cout<<root->right->left<<endl;
  cout<<root->right->right<<endl;
  return 0;
}
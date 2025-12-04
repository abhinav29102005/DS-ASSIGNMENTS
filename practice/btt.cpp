#include<bits/stdc++.h>
#include<queue>
using namespace std;
static int idx = -1;
struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data = val;
    left = right = nullptr;
  }
};
// //preorder traversal
// Node* buildTree(vector<int> preorder){
//   idx ++;
//   if( preorder[idx] == -1) {return nullptr;}
//   Node* root = new Node(preorder[idx]);
//   root->left = buildTree(preorder);
//   root->right=buildTree(preorder);
//   return root;
// }
// void preOrder(Node* root){
//   if(!root) return;
//   cout<<root->data<<" ";
//   preOrder(root->left);
//   preOrder(root->right);
// }

// //inorder traversal
// Node* buildTree(vector<int> inorder){
//   idx ++;
//   if( inorder[idx] == -1) {return nullptr;}
//   Node* root = new Node(inorder[idx]);
//   root->left = buildTree(inorder);
//   root->right=buildTree(inorder);
//   return root;
// }
// void inOrder(Node* root){
//   if(!root) return;
//   inOrder(root->left);
//   cout<<root->data<<" ";
//   inOrder(root->right);
// }

// //postorder traversal
// Node* buildTree(vector<int> postorder){
//   idx ++;
//   if( postorder[idx] == -1) {return nullptr;}
//   Node* root = new Node(postorder[idx]);
//   root->left = buildTree(postorder);
//   root->right=buildTree(postorder);
//   return root;
// }
// void postOrder(Node* root){
//   if(!root) return;
//   postOrder(root->left);
//   postOrder(root->right);
//   cout<<root->data<<" ";
// }

//levelorder traversal
Node* buildTree(vector<int> inorder){
  idx ++;
  if( inorder[idx] == -1) {return nullptr;}
  Node* root = new Node(inorder[idx]);
  root->left = buildTree(inorder);
  root->right=buildTree(inorder);
  return root;
}
void inOrder(Node* root){
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
  if(!root) return;
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}
int main(){
  vector<int> postorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  Node* root = buildTree(postorder);
  postOrder(root);
  cout<<endl;
  return 0;
}
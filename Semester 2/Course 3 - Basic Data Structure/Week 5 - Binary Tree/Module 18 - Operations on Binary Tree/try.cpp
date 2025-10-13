
#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *left;
  Node *right;

  Node(int val) {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree() {
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    return NULL;
  else
    root = new Node(val);

  queue<Node *> q;
  if (root)
    q.push(root);

  while (!q.empty()) {
    Node *parent = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;

    Node *myLeft, *myRight;

    if (l == -1)
      myLeft = NULL;
    else
      myLeft = new Node(l);
    if (r == -1)
      myRight = NULL;
    else
      myRight = new Node(r);

    parent->left = myLeft;
    parent->right = myRight;

    if (parent->left)
      q.push(parent->left);
    if (parent->right)
      q.push(parent->right);
  }

  return root;
}

void leftSide(Node *root) {
  if (!root)
    return;

  leftSide(root->left);
  leftSide(root->right);
  if (root->left)
    cout << root->left->val << " ";
  else if (!root->left && root->right)
    cout << root->right->val << " "; // else
}
void rightSide(Node *root) {
  if (!root)
    return;

  if (root->right)
    cout << root->right->val << " ";
  else if (root->left && !root->right)
    cout << root->left->val << " ";
  if (root->right)
    rightSide(root->right);
  else
    rightSide(root->left);
}

int main() {
  Node *root = input_tree();
  leftSide(root->left);
  if (root->left)
    cout << root->left->val << " ";
  if (root)
    cout << root->val << " ";
  if (root->right)
    cout << root->right->val << " ";
  rightSide(root->right);

  return 0;
}

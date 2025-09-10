// Question: Take a singly linked list as input, then print the maximum value of
// them.

#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <iostream>
using namespace std;
class Node {
public:
  int val;
  Node *next;

  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, int val) {

  Node *newNode = new Node(val);

  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = tail->next;
}

int linked_list_max(Node *head) {
  Node *tmp = head;
  int max_val = 0;

  for (Node *i = tmp; i->next != NULL; i = i->next) {
    max_val = max(max_val, i->val);
  }
  return max_val;
}

int main() {
 
  Node *head = NULL;
  Node *tail = NULL;

  int val = 0;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_at_tail(head, tail, val);
  }

  cout << linked_list_max(head) << endl;

  return 0;
}
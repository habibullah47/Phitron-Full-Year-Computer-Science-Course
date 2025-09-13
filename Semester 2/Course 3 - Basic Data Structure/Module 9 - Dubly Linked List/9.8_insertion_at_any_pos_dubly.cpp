#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node *prev;

  Node(int val) {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void print_forward(Node *head) {
  Node *tmp = head;

  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
void print_backward(Node *tail) {
  Node *tmp = tail;

  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << endl;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val) {
  Node *tmp = head;

  for (int i = 1; i < idx; i++) {
    tmp = tmp->next;
  }

  Node *newNode = new Node(val);

  // couple by couple
  newNode->next = tmp->next;
  tmp->next->prev = newNode;
  //-
  tmp->next = newNode;
  newNode->prev = tmp;
  // newNode->prev == tmp;
}
int main() {
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(30);

  head->next = a;
  a->prev = head;

  a->next = tail;
  tail->prev = a;

  insert_at_any_pos(head, tail, 2, 100);
  insert_at_any_pos(head, tail, 1, 50);
  print_forward(head);
  print_backward(tail);
  return 0;
}
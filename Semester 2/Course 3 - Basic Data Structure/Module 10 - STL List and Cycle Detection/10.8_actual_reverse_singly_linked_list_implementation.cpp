#include <cstddef>
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
void reverse_linked_list(Node *&head, Node *&tail, Node *tmp) {
  // base case
  if (tmp->next == NULL) {
    head = tmp;
    return;
  }

  reverse_linked_list(head, tail, tmp->next);
  tmp->next->next = tmp;
  tmp->next = NULL;
  tail = tmp;
}

void print_linked_list(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }

  cout << endl;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  int val;

  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_at_tail(head, tail, val);
  }
  reverse_linked_list(head, tail, head);
  print_linked_list(head);

  return 0;
}
// Question: Take a singly linked list as input and sort it in descending order.
// Then print the list.

#include <algorithm>
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
    head = tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = newNode;
}

void reverse_linked_list(Node *&head) {
  // base case
  if (head == NULL) {
    return;
  }
  cout << head->val << " ";

  reverse_linked_list(head->next);
}

void print_reverse(Node *head) {

  for (Node *i = head; i->next != NULL; i = i->next) {
    for (Node *j = i->next; j != NULL; j = j->next) {
      if (i->val < j->val) {
        swap(i->val, j->val);
      }
    };
  };
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
  print_reverse(head);
  reverse_linked_list(head);
  // printing_linked_list(head);

  return 0;
}
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
int size_of_linkedlist(Node *head) {
  int count = 0;

  Node *tmp = head;
  while (tmp != NULL) {
    count++;
    tmp = tmp->next;
  }

  return count;
}

void search_the_middle(Node *head, int n) {
  Node *tmp = head;

  if (n % 2 != 0) {
    int middle = n / 2;
    for (int i = 0; i < middle; i++) {
      tmp = tmp->next;
    }
    cout << tmp->val << endl;
    return;

  } else {
    int middle = n / 2;
    for (int i = 0; i < middle-1; i++) {
      tmp = tmp->next;
    }

    cout << tmp->val << endl;
    cout << tmp->next->val << endl;
  }
}
int main() {
  Node *head = new Node(5);
  Node *a = new Node(4);
  Node *b = new Node(8);
  Node *c = new Node(6);
  Node *d = new Node(6);
  Node *tail = new Node(1);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;

  int n = size_of_linkedlist(head);

  search_the_middle(head, n);
  return 0;
}
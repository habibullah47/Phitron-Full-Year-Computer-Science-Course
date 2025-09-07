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

bool check_duplicate_value(Node *&head) {
  int freq[101] = {0};
  Node *tmp = head;

  while (tmp != NULL) {
    freq[tmp->val]++;
    if (freq[tmp->val] > 1) {
      return true;
    }

    tmp = tmp->next;
  }

  return false;
}
int main() {
  Node *head = new Node(5);
  Node *a = new Node(4);
  Node *b = new Node(8);
  Node *c = new Node(6);
  Node *d = new Node(9);
  Node *tail = new Node(1);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;

  cout << (check_duplicate_value(head) ? "YES" : "NO") << endl;
  return 0;
}
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

int max_val(Node *&head) {
  Node *tmp = head;
  int mx = tmp->val;
  for (Node *i = tmp; i != NULL; i = i->next) {
    mx = max(mx, i->val);
  }

  return mx;
}
int min_val(Node *&head) {
  int mn = head->val;
  for (Node *i = head; i != NULL; i = i->next) {
    mn = min(mn, i->val);
  }
  return mn;
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
  int max, min;

  max = max_val(head);
  min = min_val(head);

  if (max == 0 || min == 0) {
    cout << "0" << endl;
  } else {
    cout << max - min << endl;
  }
  return 0;
}
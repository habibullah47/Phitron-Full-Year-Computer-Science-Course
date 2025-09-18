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

void insert_at_tail(Node *&head, Node *&tail, int val) {

  Node *newNode = new Node(val);

  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  newNode->prev = tail;

  tail = tail->next;
}

bool check_palindrome(Node *head, Node *tail) {
  bool flag = true;
  for (Node *i = head, *j = tail; i != j && i->prev != j;
       i = i->next, j = j->prev) {
    if (i->val != j->val) {
      flag = false;
      break;
    }
  }

  return flag;
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
  cout << (check_palindrome(head, tail) ? "YES" : "NO") << endl;
  return 0;
}
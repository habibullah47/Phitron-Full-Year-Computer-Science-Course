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

void insert_at_head(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);
  if (head == NULL) {
    head = tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);
  if (head == NULL) {
    head = tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val) {
  Node *tmp = head;
  for (int i = 0; i < idx - 1; i++) {
    tmp = tmp->next;
  }
  Node *newNode = new Node(val);
  newNode->next = tmp->next;
  newNode->prev = tmp;
  tmp->next->prev = newNode;
  tmp->next = newNode;
}

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

int size_of_linked_list(Node *head) {
  int cnt = 0;
  Node *tmp = head;
  while (tmp != NULL) {
    cnt++;
    tmp = tmp->next;
  }
  return cnt;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  int query;
  cin >> query;

  while (query--) {
    int idx, val;
    cin >> idx >> val;
    int sz = size_of_linked_list(head);

    if (idx > sz) {
      cout << "Invalid" << endl;
      continue;
    }

    if (idx == 0)
      insert_at_head(head, tail, val);
    else if (idx == sz)
      insert_at_tail(head, tail, val);
    else
      insert_at_any_pos(head, tail, idx, val);

    print_forward(head);
    print_backward(tail);
  }

  return 0;
}


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
  tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
  if (tail == NULL) {
    tail = newNode;
  }
}

void delete_at_any_pos(Node *&head, Node *&tail, int idx) {
  if (head == NULL) {
    return;
  }

  if (idx == 0) {
    Node *deleteNode = head;
    head = head->next;
    if (head == NULL)
      tail = NULL;
    delete deleteNode;
    return;
  }

  Node *tmp = head;
  for (int i = 0; i < idx - 1 && tmp->next != NULL; i++) {
    tmp = tmp->next;
  }

  if (tmp->next == NULL) {
    return;
  }

  Node *deleteNode = tmp->next;
  tmp->next = deleteNode->next;
  if (tmp->next == NULL)
    tail = tmp;
  delete deleteNode;
}

void printing_linked_list(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
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
  int q;
  cin >> q;
  while (q--) {
    int x, v;
    cin >> x >> v;

    if (x == 0) {
      // head
      insert_at_head(head, tail, v);
      printing_linked_list(head);

      cout << endl;
    } else if (x == 1) {
      // tail
      insert_at_tail(head, tail, v);
      printing_linked_list(head);

      cout << endl;
    } else if (x == 2) {

      // delete
      delete_at_any_pos(head, tail, v);
      printing_linked_list(head);
      cout << endl;
    }
  }

  return 0;
}
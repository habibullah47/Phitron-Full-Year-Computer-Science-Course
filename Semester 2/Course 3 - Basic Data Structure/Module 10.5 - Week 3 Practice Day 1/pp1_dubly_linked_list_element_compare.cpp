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

int size_of_linked_list(Node *head) {
  int cnt = 0;
  Node *tmp = head;
  while (tmp != NULL) {
    cnt++;
    tmp = tmp->next;
  }

  return cnt;
}

void are_lists_equal(Node *head, Node *head1) {
  bool flag = false;
  if (size_of_linked_list(head) != size_of_linked_list(head1)) {
    flag = true;
  } else {
    for (Node *i = head, *j = head1; i != NULL && j != NULL;
         i = i->next, j = j->next) {
      // or only i == j
      if (i->val != j->val) {
        flag = true;
        break;
      }
    }
  }
  if (flag == true)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}

int main() {
  Node *head = NULL;
  Node *head1 = NULL;

  Node *tail = NULL;
  Node *tail1 = NULL;

  int val = 0;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_at_tail(head, tail, val);
  }
  val = 0;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_at_tail(head1, tail1, val);
  }

  are_lists_equal(head, head1);

  return 0;
}
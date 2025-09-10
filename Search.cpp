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

void search_at_linked_list(Node *&head, int x) {
  Node *tmp = head;

  int cnt = 0;
  for (Node *i = tmp; i != NULL; i = i->next) {
    cnt++;
    if (x == i->val) {
      cout << cnt-1 << endl;
      return;
    }
  }
  cout << "-1" << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  while (t--) {

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

    int x;
    cin >> x;
    search_at_linked_list(head, x);
  }
  return 0;
}

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

class myQueue {
public:
  Node *head = NULL;
  Node *tail = NULL;

  int sz = 0;
  void push(int val) { // O(1)
    sz++;
    Node *newnode = new Node(val);

    if (head == NULL) {
      head = newnode;
      tail = newnode;
      return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
  }
  void pop() { // O(1)
    sz--;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL) {
      tail = NULL;
      return;
    }
    head->prev = NULL;
  }
  int front() { return head->val; } // O(1)

  int back() { return tail->val; }      // O(1)
  int size() { return sz; }             // O(1)
  bool empty() { return head == NULL; } // O(1)
};

int main() {
  myQueue q;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    q.push(val);
  }

  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
  return 0;
}
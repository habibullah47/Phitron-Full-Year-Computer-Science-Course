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

class myQueue {
  Node *head = NULL;
  Node *tail = NULL;

  int sz = 0;

public:
  void push(int val) {
    Node *newNode = new Node(val);
    if (empty()) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
    sz++;
  }

  void pop() {
    if (empty())
      return;
  

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
      sz--;
    if (head == NULL) {
      tail = NULL;
    }
  }

  bool empty() { return sz == 0; }

  int front() {
    if (head == NULL)
      return -1;

    return head->val;
  }

  int back() {
    if (head == NULL)
      return -1;
    return tail->val;
  }

  int size() { return sz; }
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
    cout << q.front() << " ";
    q.pop();
  }
  q.pop();
  q.pop();
  q.pop();
  cout << q.size() << q.front() << q.back();
}

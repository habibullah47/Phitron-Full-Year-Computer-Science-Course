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
class myStack {
  Node *head = NULL;
  Node *tail = NULL;

  int sz = 0;

public:
  void push(int val) {
    Node *newNode = new Node(val);
    if (isEmpty()) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    sz++;
  }

  void pop() {
    if (isEmpty()) {
      return;
    }
    Node *deleteNode = tail;
    if (head == tail) {
      head = tail = NULL;
    } else {
      tail = tail->prev;
      tail->next = NULL;
    }
    delete deleteNode;
    sz--;
  }

  int top() {
    if (isEmpty()) {
      return 0;
    }
    return tail->val;
  }

  int size() { return sz; }

  bool isEmpty() { return sz == 0; }
};

class myQueue {
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

public:
  void push(int val) {
    Node *newNode = new Node(val);
    if (isEmpty()) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
    sz++;
  }

  void pop() {
    if (isEmpty())
      return;
    Node *deleteNode = head;
    head = head->next;
    if (!head)
      tail = NULL;
    delete deleteNode;
    sz--;
  }

  int front() {
    if (isEmpty())
      return -1;
    return head->val;
  }

  int size() { return sz; }

  bool isEmpty() { return sz == 0; }
};

int main() {
  myStack st;
  myQueue q;
  int n, m;
  cin >> n >> m;

  if (n != m) {
    cout << "NO" << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    st.push(val);
  }

  for (int i = 0; i < m; i++) {
    int val;
    cin >> val;
    q.push(val);
  }

  while (!st.isEmpty()) {
    if (st.top() != q.front()) {
      cout << "NO" << endl;
      return 0;
    }
    st.pop();
    q.pop();
  }

  cout << "YES" << endl;
  return 0;
}
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
  myStack s1, s2;

public:
  void push(int val) { s1.push(val); }

  void pop() {
    if (isEmpty())
      return;
    if (s2.isEmpty()) {
      while (!s1.isEmpty()) {
        s2.push(s1.top());
        s1.pop();
      }
    }
    s2.pop();
  }

  int front() {
    if (isEmpty())
      return -1;

    if (s2.isEmpty()) {
      while (!s1.isEmpty()) {
        s2.push(s1.top());
        s1.pop();
      }
    }
    return s2.top();
  }
  bool isEmpty() { return s1.isEmpty() && s2.isEmpty(); }
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
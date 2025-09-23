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

class myStack {
public:
  Node *head = NULL;
  Node *tail = NULL;

  int sz = 0;
  void push(int val) {
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
  void pop() {
    sz--;
    Node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if (tail == NULL) {
      head = NULL;
      return;
    }
    tail->next = NULL;
  }
  int top() { return tail->val; }
  int size() { return sz; }
  bool empty() { return head == NULL; }
};

int main() {
  myStack st;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    st.push(val);
  }
  myStack st2;

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int val;
    cin >> val;
    st2.push(val);
  }

  bool flag = true;

  if (st.size() == st2.size()) {
    while (!st.empty()) {
      if (st.top() == st2.top()) {
        st.pop();
        st2.pop();
      } else {
        flag = false;
        break;
      }
    }
  }else {
  flag = false;
  }

  cout << (flag ? "YES" : "NO") << endl;
}

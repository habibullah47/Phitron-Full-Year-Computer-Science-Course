#include <iostream>
#include <list>
using namespace std;

class myQueue {
public:
  list<int> l;

  int sz = 0;
  void push(int val) { // O(1)
    l.push_back(val);
  }
  void pop() { // O(1)
    l.pop_front();
  }
  int front() { return l.front(); } // O(1)

  int back() { return l.back(); }    // O(1)
  int size() { return l.size(); }    // O(1)
  bool empty() { return l.empty(); } // O(1)
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
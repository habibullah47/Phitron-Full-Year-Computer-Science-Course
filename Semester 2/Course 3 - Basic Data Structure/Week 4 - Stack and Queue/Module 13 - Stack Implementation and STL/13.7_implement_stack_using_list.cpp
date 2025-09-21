#include <iostream>
#include <list>
#include <vector>
using namespace std;

class myStack {
public:
  list<int> l;

  void push(int val) { l.push_back(val); }
  void pop() { l.pop_back(); }
  int top() { return l.back(); }
  int size() { return l.size(); }
  bool empty() { return l.empty(); }
};

int main() {
  myStack st;
  int n, val;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> val;
    st.push(val);
  }

  while (!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}
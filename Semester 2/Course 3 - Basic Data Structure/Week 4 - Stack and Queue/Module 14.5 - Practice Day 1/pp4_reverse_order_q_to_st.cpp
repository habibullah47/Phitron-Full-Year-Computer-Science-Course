#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
  queue<int> q;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    q.push(val);
  }

  queue<int> q2;
  stack<int> st;
  while (!q.empty()) {
    st.push(q.front());
    q.pop();
  }

  while (!st.empty()) {
  q2.push(st.top());
  st.pop();
  }

  while (!q2.empty()) {
    cout << q2.front() << " ";
    q2.pop();
  }
  return 0;
}
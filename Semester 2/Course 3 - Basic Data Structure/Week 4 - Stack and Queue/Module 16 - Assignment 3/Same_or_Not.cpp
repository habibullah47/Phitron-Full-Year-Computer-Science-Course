/******************************************************** 
Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using  Stack and Queue only.
*********************************************************/

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
  stack<int> st;
  queue<int> q;

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

  while (!st.empty()) {
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
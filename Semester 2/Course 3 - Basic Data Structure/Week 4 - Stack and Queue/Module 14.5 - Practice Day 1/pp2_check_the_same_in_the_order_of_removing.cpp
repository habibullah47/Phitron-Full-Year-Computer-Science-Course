#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
  stack<int> st;
  queue<int> q;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    st.push(val);
  }
  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int val;
    cin >> val;
    q.push(val);
  }

  bool flag = true;

  if (st.size() == q.size()) {
    while (!q.empty()) {
      if (st.top() != q.front()) {
        flag = false;
        break;
      }
      st.pop();
      q.pop();
    }
  } else {
    flag = false;
  }

  cout << (flag ? "YES" : "NO") << endl;

  return 0;
}
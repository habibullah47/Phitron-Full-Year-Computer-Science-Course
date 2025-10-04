#include <iostream>
#include <stack>
using namespace std;

bool isEliminate(string s) {
  stack<char> q;
  for (char n : s) {
    if (!q.empty() && n == '1' && q.top() != n) {
      q.pop();
    } else {
      q.push(n);
    }
  }

  return q.empty();
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    cout << (isEliminate(s) ? "YES" : "NO") << endl;
  }
  return 0;
}
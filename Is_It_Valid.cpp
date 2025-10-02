#include <iostream>
#include <queue>
#include <stack>
using namespace std;

bool isValid() {
  queue<int> q;
  string s;
  cin >> s;

  for (int n : s) {
    if (!q.empty() && q.back() != n) {
      q.pop();
    } else {
      q.push(n);
    }
  }
  return q.empty();
}

int main() {
int t;
cin >>t;
while (t--) {
  cout << (isValid() ? "YES" : "NO") << endl;

}
  return 0;
}
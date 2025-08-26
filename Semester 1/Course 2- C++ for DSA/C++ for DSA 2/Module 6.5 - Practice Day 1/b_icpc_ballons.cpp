#include <algorithm>
#include <iostream>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int total = 0;
  sort(s.begin(), s.end());
  for (int i = 0; i < n; i++) {
    if (s[i] != s[i + 1]) {
      total += 2;
    } else {
      total++;
    }
  }

  cout << total << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
#include <iostream>
#include <ostream>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < 3; i++) {
    sum1 += (s[i] - '0');
  }
  for (int i = 3; i < 6; i++) {
    sum2 += (s[i] - '0');
  }

  cout << (sum1 == sum2 ? "YES" : "NO") << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
/*
Input:
5
213132
973894
045207
000000
055776

Output:
YES
NO
YES
YES
NO
*/
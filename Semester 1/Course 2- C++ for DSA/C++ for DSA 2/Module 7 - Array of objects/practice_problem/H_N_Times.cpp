#include <iostream>
using namespace std;

void solve() {
  int n;
  char c;

  cin >> n >> c;

  for (int i = 0; i < n; i++) {
    cout << c << " ";
  }
}
// void solve() {
//   int n;
//   char c;

//   cin >> n >> c;

//   string s(n,c);
//   cout << s << " ";
// }
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << endl;
  }
  return 0;
}
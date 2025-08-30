#include <iostream>
using namespace std;

void solve() {
  string s, x;

  cin >> s >> x;

  int pos = 0;
  while ((pos = s.find(x))!= string::npos) {
   // int pos = s.find(x);
    s.replace(pos, x.size(), "#");
  }
  cout << s << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
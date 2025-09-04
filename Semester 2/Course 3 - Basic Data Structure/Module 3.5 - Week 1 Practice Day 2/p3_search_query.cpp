#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  int q;
  cin >> q;

  while (q--) {
    bool flag = false;
    int l = 0;
    int r = n - 1;
    int val;
    cin >> val;

    while (l <= r) {
      int m = (l + r) / 2;
      if (val == v[m]) {
        flag = true;
        break;
      } else if (val > v[m]) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }

    cout << (flag ? "YES" : "NO") << endl;
  }
  return 0;
}
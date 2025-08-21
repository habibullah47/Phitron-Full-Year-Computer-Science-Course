// failed
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {

    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a, a + n);
    bool yes = false;

    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
          int tmp = a[i] + a[j] + a[k];
          if (tmp == s) {
            yes = true;
            break;
          }
        }
      }
    }

    cout << (yes ? "YES" : "NO") << endl;
  }
  return 0;
}
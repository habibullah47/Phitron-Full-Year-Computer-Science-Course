#include <climits>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int m = INT_MAX;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int val = a[i] + a[j] + (j - i);
        if (val < m)
          m = val;
      }
    }

    cout << m;
  }
  return 0;
}
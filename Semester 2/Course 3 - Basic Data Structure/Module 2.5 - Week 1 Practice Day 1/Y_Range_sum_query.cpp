#include <iostream>
using namespace std;

// Solve in brute force way
int main() {
  // Input n, q
  int n, q;
  cin >> n >> q;

  // Input: a[n]
  int a[n];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  while (q--) {
    // Input l, r
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l; i <= r; i++) {
      sum += a[i];
    }

    cout << sum << endl;
  }

  return 0;
}
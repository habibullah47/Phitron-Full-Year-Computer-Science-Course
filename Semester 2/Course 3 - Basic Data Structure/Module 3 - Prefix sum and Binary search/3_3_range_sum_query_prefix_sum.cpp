#include <iostream>
#include <vector>
using namespace std;

// Solve in brute force way
int main() {
  // Input n, q
  int n, q;
  cin >> n >> q;

  // Input: a[n]
  long long int a[n];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  vector<long long int> pre(n);
  pre[1] = a[1];

  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  while (q--) {
    // Input l, r
    int l, r;
    cin >> l >> r;
    long long int sum;
    if (l == 1) {
      sum = pre[r];
    } else {
      sum = pre[r] - pre[l - 1];
    }

    cout << sum << endl;
  }

  return 0;
}
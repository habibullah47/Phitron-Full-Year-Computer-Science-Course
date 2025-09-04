#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n, q;
  cin >> n >> q;

  vector<long long int> a(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  vector<long long int> pre(n + 1);
  pre[1] = a[1];

  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    if (l == 1) {
      sum = pre[r];
    } else {
      sum = pre[r] - pre[l - 1];
    }

    cout << sum << endl;
  }
  return 0;
}


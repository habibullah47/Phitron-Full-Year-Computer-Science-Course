#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }
    if (n % 2 != 0) {
      cout << "-1" << endl;
    } else {
      cout << abs(even - odd) / 2 << endl;
    }
  }
  return 0;
}
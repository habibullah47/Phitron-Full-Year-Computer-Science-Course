#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  bool p = true;

  for (int i = 0, j = n - 1; i < n - 1 / 2; i++, j--) {
    if (array[i] != array[j]) {
      p = false;
      break;
    }
  }

  cout << (p ? "YES" : "NO");
  return 0;
}
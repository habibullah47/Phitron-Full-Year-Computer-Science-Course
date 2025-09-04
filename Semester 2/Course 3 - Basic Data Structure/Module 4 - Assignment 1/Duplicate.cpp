#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  
  vector<long long int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  bool flag = false;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] == a[i + 1]) {
      flag = true;
      break;
    }
  }

  cout << (flag ? "YES" : "NO") << endl;

  return 0;
}
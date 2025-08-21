// Sort is necessary on daily basis work.

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];sort(a, a + n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // sort(a, a + n); //Ascending Sort
  sort(a, a + n, greater<int>()); // Descending Sort
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
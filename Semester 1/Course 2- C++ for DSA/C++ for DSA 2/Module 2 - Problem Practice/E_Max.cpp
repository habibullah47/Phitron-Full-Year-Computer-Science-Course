
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  int maxValue = array[0];
  for (int i = 0; i < n; i++) {
    maxValue = max(maxValue, array[i]);
  }

  cout << maxValue;

  return 0;
}
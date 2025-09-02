#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  // THIS ONE IS FAKE SOLUTION, MAKE TROUBLE WITH TIME COMPLEXITY
  //  int count = 0;
  //  for (int i = 0; i < n; i++) {
  //    for (int j = 0; j < n; j++) {
  //      if (v[i] + 1 == v[j]) {
  //        count++;
  //        break;
  //      }
  //    }
  //  }

  // Actually THE REAL SOLUTION
  int cnt = 0;
  for (int i = 0; i < v.size(); i++) {
    auto it = find(v.begin(), v.end(), v[i] + 1);
    if (it != v.end()) {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}
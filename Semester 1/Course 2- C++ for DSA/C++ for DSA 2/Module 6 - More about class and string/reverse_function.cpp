#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  // Reverse func for array[]
  //  int n = 5;
  //  int a[5] = {1, 2,3,4,5};
  //  reverse(a,  a+n);
  //  for (int i : a) {
  //  cout << i << " ";
  //  }

  // Reverse func for string
  string reverse_engine;
  cin >> reverse_engine;

  reverse(reverse_engine.begin(), reverse_engine.end());

  cout << reverse_engine;

  return 0;
}
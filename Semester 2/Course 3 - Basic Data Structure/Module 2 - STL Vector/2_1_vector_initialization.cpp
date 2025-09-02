#include <iostream>
#include <vector>
using namespace std;

int main() {
  // vector<int> v; type 1

  // int n = 5;
  int a[5] = {1, 2, 3, 4, 5};
  // vector<int> v1(n); type 2
  // vector<int> v2(n, -1); type 3

  // vector<int> v3(v2); type 4
  // vector<int> v3(a, a + 3);
  vector<int> v4 = {100, 200, 300, 400};

  for (int i = 0; i < v4.size(); i++) {
    cout << v4[i] << endl;
  }
  return 0;
}
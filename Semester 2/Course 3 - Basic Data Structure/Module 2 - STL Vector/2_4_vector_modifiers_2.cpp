#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// int main() {
//   vector<int> v;

//   v = {100, 200, 300, 400, 500, 200};

//   //Replace didn't under on v.
//   replace(v.begin(), v.end() - 3, 200, 2);

//   for (int n : v) {
//     cout << n << endl;
//   }
//   return 0;
// }

// Find
int main() {
  vector<int> v;

  v = {100, 200, 300, 400, 500, 200};

  // find
  // find return iterator
  // vector<int>::iterator it = find(v.begin(), v.end(), 200);
  auto it = find(v.begin(), v.end(), 200);

  if (it == v.end()) {
    cout << "Digit Not Found" << endl;

  } else {
    cout << "Digit Found" << endl;
  }
  // If find value need to print.
  cout << *it << endl;
  return 0;
}
//@ modifiers - 2

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main() {
  list<int> l = {10, 20, 30, 40, 50, 60};
  list<int> l1;
  l1 = l;

  list<int> l3 = {1, 2, 3, 2, 5, 2};

  // l.erase(next(l.begin(), 2));

  // for multiple
  // l.erase(next(l.begin(), 2), next(l.begin(), 4));

  // replace(l3.begin(), l3.end(), 2, 200);

  auto it = find(l.begin(), l.end(), 29);
  if (it == l.end()) {
    cout << "Not found\n";
  } else {
    cout << "Found\n";
  }

  // for (int n : l3) {
  //   cout << n << endl;
  // }
  return 0;
}
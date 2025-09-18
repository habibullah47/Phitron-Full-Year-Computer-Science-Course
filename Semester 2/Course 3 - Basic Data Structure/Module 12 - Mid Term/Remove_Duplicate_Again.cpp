#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l;
  int val;

  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    l.push_back(val);
  }

  l.sort();
  l.unique();

  for (int n : l) {
    cout << n << " ";
  }
  return 0;
}
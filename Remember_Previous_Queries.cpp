#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l;

  int q;
  cin >> q;

  while (q--) {
    int x, v;
    cin >> x >> v;

    if (x == 0) {
      l.push_front(v);
    } else if (x == 1) {
      l.push_back(v);
    } else if (x == 2 && v < l.size()) {
      auto it = l.begin();
      for (int i = 0; i < v; i++) {
        it = next(it);
      }
      l.erase(it);
    }

    cout << "L -> ";
    for (int n : l) {
      cout << n << " ";
    }
    cout << endl;
    l.reverse();
    cout << "R -> ";
    for (int n : l) {
      cout << n << " ";
    }
    cout << endl;
    l.reverse();
  }

  return 0;
}
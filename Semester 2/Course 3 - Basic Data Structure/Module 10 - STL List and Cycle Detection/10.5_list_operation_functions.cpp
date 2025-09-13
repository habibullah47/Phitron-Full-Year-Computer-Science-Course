#include <functional>
#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l = {10, 20, 30, 10, 50, 10};

   l.remove(10);

  // reverse sort
  // l.sort(greater<int>());

  // limitation: only remove multiple same digit value in sorted.
  // So we need to sort first
  l.sort();

  //l.unique();

  l.reverse();

  for (int n : l) {
    cout << n << endl;
  }

  return 0;
}
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main() {
  list<int> l = {10, 20, 30, 10, 50, 10};

  cout << l.front() << endl;
  cout << l.back() << endl;
  // If we want to access a element in any pos
  cout << *next(l.begin(), 2) << endl;

  // access by iterators
  cout << *l.begin() << endl;

  return 0;
}
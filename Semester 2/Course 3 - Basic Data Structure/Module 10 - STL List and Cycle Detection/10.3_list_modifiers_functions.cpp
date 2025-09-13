//@ modifiers

#include <iostream>
#include <iterator>
#include <list>
using namespace std;

/**
 * @file 10.3_list_modifiers_functions.cpp
 * @brief Demonstrates the usage of list modifiers and functions in C++ STL.
 *
 * This program showcases various list operations including:
 * - Initialization and assignment of lists.
 * - Adding elements to the back and front of a list (push_back, push_front).
 * - Removing elements from the back and front of a list (pop_back, pop_front).
 * - Accessing elements at a specific index using iterators.
 * - Inserting single and multiple elements into a list at a specific position.
 *
 * The program initializes a list `l` with some integer values, then copies it
 * to `l1`. It then demonstrates inserting elements from another list `l3` into
 * `l1` at a specified position using iterators. Finally, it prints all the
 * elements of the modified list `l1`.
 */
int main() {
  list<int> l = {10, 20, 30};
  list<int> l1;
  l1 = l;

  //   l1.push_back(100);
  //   l1.push_front(100);

  //   l1.pop_front();
  //   l1.pop_back();

  //   // accessing index in list

  //   cout << *next(l.begin(), 1) << endl;

  // l1.insert(next(l1.begin(), 1), 75);

  // To inserting multiple value:
  list<int> l3 = {1, 2, 3, 4, 5};

  l1.insert(next(l1.begin(), 1), l3.begin(), l3.end());

  for (int n : l1) {
    cout << n << endl;
  }
  return 0;
}
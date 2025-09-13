#include <iostream>
#include <list>
using namespace std;

/**
 * @file 10.2_list_capacity_functions.cpp
 * @brief This program demonstrates the usage of various capacity-related
 * functions of the std::list container in C++.
 *
 * The program initializes a list of integers and showcases the following
 * functionalities:
 * - `clear()`: Removes all elements from the list, making it empty.
 * - `resize(n)`: Resizes the list to contain `n` elements. If `n` is smaller
 * than the current size, the list is truncated. If `n` is larger, new elements
 * are added to the end.  If no value is specified, new elements are
 * default-initialized (e.g., to 0 for integers).
 * - `resize(n, val)`: Resizes the list to contain `n` elements. If `n` is
 * smaller than the current size, the list is truncated. If `n` is larger, new
 * elements are added to the end and initialized with a copy of `val`.
 *
 * The program initializes a list `l` with the values {10, 20, 30} and then
 * demonstrates the `resize()` function to modify the list's size and content.
 *
 * @author Habibullah
 * @date 13/9/25
 */
int main() {
  list<int> l = {10, 20, 30};

  //*checking l.clear()
  //   cout << l.size() << endl;
  //   l.clear();
  //   cout << l.size() << endl;

  // shorting the size
  // l.resize(2);

  // extend the size: but extended size will be 0
  // l.resize(5);

  // extended size with pre defined value
  l.resize(5, 100);

  for (int n : l) {
    cout << n << endl;
  }

  return 0;
}
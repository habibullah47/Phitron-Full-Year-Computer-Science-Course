#include <iostream>
#include <list>
#include <vector>
using namespace std;

/**
 * @file 10.1_stl_list.cpp
 * @brief This program demonstrates the usage of the std::list container in C++.
 *
 * The program initializes a list with a specific size and value,
 * then initializes another list by copying elements from a vector.
 * Finally, it iterates through the second list and prints each element to the console.
 *
 * @note The commented-out code snippets demonstrate alternative ways to initialize a list,
 *       such as copying from another list or from an array.
 */
int main() {
  list<int> l(10, 3);

  // copy from l
  // list<int> l2(l);

  // We can also keep array
  //   int array[] = {10, 20, 30};
  //   list<int> l2(array, array+3);

  // vector also
  vector<int> v = {5, 15, 25, 35};
  list<int> l2(v.begin(), v.end());

  // for (auto it = l.begin(); it!= l.end(); it++){
  //     cout << *it << endl;
  // }

  // More shorcut
  // We prefer it from now.
  // and we use it frequently
  for (int n : l2) {
    cout << n << endl;
  }

  return 0;
}
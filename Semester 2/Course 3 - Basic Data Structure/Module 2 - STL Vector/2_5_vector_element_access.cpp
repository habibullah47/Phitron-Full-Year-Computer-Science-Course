#include <iostream>
using namespace std;
// time, complexity: order of one
int main() {
  vector<int> v;

  v = {100, 200, 300, 400, 500};

  cout << v[1] << endl;
  //   cout << v[v.size()-1] << endl;

  // Access last element of vector
  cout << v.back();

  return 0;
}
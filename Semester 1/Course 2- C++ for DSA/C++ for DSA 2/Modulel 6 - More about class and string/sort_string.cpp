#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string target("planetearth");

  sort(target.begin(), target.end());

  cout << target;

  return 0;
}
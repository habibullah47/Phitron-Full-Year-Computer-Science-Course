#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(10);
  v.push_back(100);
  cout << v.size() << endl;

  // v.clear();
  cout << v.size() << endl;

  // resise

  v.resize(8);

  for (int i = 0; i < v.size(); i++) {
    cout << "After resize " << v[i] << endl;
  }
  return 0;
}
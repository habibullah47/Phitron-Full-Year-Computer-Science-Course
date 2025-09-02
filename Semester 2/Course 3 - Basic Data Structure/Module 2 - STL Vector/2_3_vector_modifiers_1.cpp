#include <iostream>
#include <vector>
using namespace std;

// assign and more

// int main() {
//   vector<int> v = {1, 2, 3, 4, 5};
//   vector<int> v2;

//   v2 = v;

//   v2.pop_back();
//   v2.pop_back();
//   v2.pop_back();

//   //   for (int i = 0; i < v2.size(); i++) {
//   //     cout << v2[i] << endl;
//   //   }

//   for (int n : v2) {
//     cout << n << endl;
//   }
//   return 0;
// }

// vector insert
// int main() {
//   vector<int> v = {1, 2, 3, 4, 5};
//   vector<int> v2;

//   v2 = {100, 200, 300};

//   // v2.insert(v2.begin()+2, 300);
//   v.insert(v.begin() + 2, v2.begin(), v2.end());

//   for (int n : v) {
//     cout << n << endl;
//   }
//   return 0;
// }

//Vector erase
int main() {
  vector<int> v2;

  v2 = {100, 200, 300};

  v2.erase(v2.begin() + 1, v2.end());

  for (int n : v2) {
    cout << n << endl;
  }
  return 0;
}
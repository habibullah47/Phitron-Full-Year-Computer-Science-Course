#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {

    string w;
    cin >> w;
    // ALGORITHM IN STEPS:

    if (w.size() > 10) {

      cout << w.front() << w.size() - 2 << w.back() << endl;
    } else {
      cout << w << endl;
    }
  }
  return 0;
}
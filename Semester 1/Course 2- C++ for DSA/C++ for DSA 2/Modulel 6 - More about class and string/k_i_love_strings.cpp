#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int test;
  cin >> test;
  while (test--) {

    string s, t;
    cin >> s >> t;

    int m = max(s.size(), t.size());

    string concrate = "";

    for (int i = 0; i < m; i++) {
      if (i < s.size()) {
        concrate += s[i];
      }
      if (i < t.size()) {
        concrate += t[i];
      }
    }

    cout << concrate << endl;
  }
  return 0;
}
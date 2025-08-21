#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x;
  while (getline(cin, x)) {
    sort(x.begin(), x.end());
    int length = x.length();
    string m = "";
    for (int i = 0; i < length; i++) {
      if (x[i] >= 'a' && x[i] <= 'z') {
        m= x[i];
      }
    }
    cout << m << endl;
  }

  return 0;
}
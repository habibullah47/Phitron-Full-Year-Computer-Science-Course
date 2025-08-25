#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  //   int n = s.size();
  //   bool isPlanindrome = true;
  //   for (int i = 0; i < n / 2; i++) {
  //     if (s[i] != s[n - i - 1]) {
  //       isPlanindrome = false;
  //       break;
  //     }
  //   }

  string reversed = s;
  reverse(reversed.begin(), reversed.end());

  if (reversed == s) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  // algorithm in steps:
  // Input
  int n;
  string s;
  cin >> n >> s;

  // For loop
  int a = 0;
  int d = 0;
  for (int i = 0; i < n; i++) {
    // If else inner for loop
    if (s[i] == 'A') {
      a++;
    } else {
      d++;
    }
  }
  // If else

  cout << (a > d ? "Anton" : (d > a ? "Danik" : "Friendship"));
  return 0;
}
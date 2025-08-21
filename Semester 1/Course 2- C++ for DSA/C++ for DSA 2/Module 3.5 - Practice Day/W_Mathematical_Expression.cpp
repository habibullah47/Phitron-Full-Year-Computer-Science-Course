// Subhanallah, That one impressive!

#include <iostream>
#include <string>
using namespace std;

int main() {
  int a, b, c;
  char s, q;

  cin >> a >> s >> b >> q >> c;
  // Nested if else here.
  int correct = (s == '+') ? a + b : (s == '-') ? a - b : a * b;

  cout << ((correct == c) ? "Yes" : to_string(correct));

  return 0;
}
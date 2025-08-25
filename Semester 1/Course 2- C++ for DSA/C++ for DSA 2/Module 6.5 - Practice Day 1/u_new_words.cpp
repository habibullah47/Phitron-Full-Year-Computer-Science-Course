
// Given a string 𝑆
// . Print number of times that "EGYPT" word can be formed from 𝑆
// 's characters.

// Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and
// "eGyPt" are the same.

// Input
// Only one line contains a string 𝑆(1≤|𝑆|≤106)
//  where |S| is the length of the string and it consists of lowercase and
//  uppercase English letters.

// Output
// Print the answer required above.

// Examples
// InputCopy
// EgYpTaz
// OutputCopy
// 1

#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
  // Input S
  string s;
  cin >> s;

  // Convert all letters to uppercase for simplicity
  for (char &c : s) {

    c = toupper(c);
  }

  int e = 0, g = 0, y = 0, p = 0, t = 0;
  for (char c : s) {
    if (c == 'E')
      e++;
    else if (c == 'G')
      g++;
    else if (c == 'Y')
      y++;
    else if (c == 'P')
      p++;
    else if (c == 'T')
      t++;
  }

  int ans = min({e, g, y, p, t});

  cout << ans << endl;

  return 0;
}
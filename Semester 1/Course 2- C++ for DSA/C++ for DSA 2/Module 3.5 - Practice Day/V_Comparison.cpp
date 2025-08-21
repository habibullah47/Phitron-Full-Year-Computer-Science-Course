// My Solution:
//  #include <iostream>
//  using namespace std;

// int main() {
//   int a, b;
//   char s;
//   cin >> a;
//   cin >> s;
//   cin >> b;

//   if (s == '>') {
//     if (a > b) {
//       cout << "Right";
//     }

//     else {
//       cout << "Wrong";
//     }
//   } else if (s == '<') {
//     if (a < b) {
//       cout << "Right";
//     }

//     else {
//       cout << "Wrong";
//     }
//   } else if (s == '=') {
//     if (a == b) {
//       cout << "Right";
//     }

//     else {
//       cout << "Wrong";
//     }
//   }
//   return 0;
// }

// Inspired from AI
#include <iostream>
using namespace std;

int main() {
  int a, b;
  char s;

  cin >> a >> s >> b;

  bool ok = (s == '>' && a > b) || (s == '<' && a < b) || (s == '=' && a == b);

  cout << (ok ? "Right" : "Wrong");
  return 0;
}
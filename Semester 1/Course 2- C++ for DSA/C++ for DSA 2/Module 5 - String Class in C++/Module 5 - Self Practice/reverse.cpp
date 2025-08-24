#include <iostream>
using namespace std;

int main() {
  // Write C++ code that:
  // Reads a string,
  // Reverses it without using reverse(),
  // Prints whether it is a palindrome.

  string s;
  cin >> s;

  string ss = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        ss += s[i];   // append char to reversed string
    }


    bool isPalindrome = (s == ss);

    cout << "Reversed: " << ss << endl;
    cout << (isPalindrome ? "Palindrome" : "Not palindrome") << endl;
  cout << (isPalindrome ? ss : "");
  return 0;
}
// New Challenge: “Smart Abbreviation”

// Statement
// You get an integer n, then n words. For each word:
// If its length is strictly greater than 10:
// If it’s palindromic (reads the same forwards and backwards), reverse the word
// and print that. Otherwise, abbreviate it like in 71A: first letter + number
// of characters in between + last letter. If its length is 10 or less, just
// print the word unchanged.

#include <iostream>
#include <string>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string smart;
    cin >> smart;
    string rev = "";
    if (smart.size() > 10) {

      for (auto it = smart.end(); it >= smart.begin(); it--) {
        rev += smart[*it];
      }
    }

    bool isPalindromic = (smart == rev);

    
  }
  return 0;
}
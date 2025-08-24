#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  cout << s << endl;
  stringstream Organization(s);

  // Print: I love white color
  string word;
  while (Organization >> word) {
    cout << "Word: " << word << endl;
    for (char c : word) {
      cout << c << " "; // print letters of the word
    }
    cout << endl;
  }

  return 0;
}
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

  string s;
  getline(cin, s);

  stringstream ss(s);

  string word;
  bool isJessica = false;
  while (ss >> word) {
    if (word == "Jessica") {
      isJessica = true;
      break;
    }
  }

  cout << (isJessica ? "YES" : "NO") << endl;

  return 0;
}
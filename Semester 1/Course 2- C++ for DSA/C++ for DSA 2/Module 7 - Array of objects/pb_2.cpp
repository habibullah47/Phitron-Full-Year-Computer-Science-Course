#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  string sentence, x;
  getline(cin, sentence);

  cin >> x;

  stringstream sentence_divider(sentence);
  string word;

  int count = 0;
  while (sentence_divider >> word) {
    if (word == x) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
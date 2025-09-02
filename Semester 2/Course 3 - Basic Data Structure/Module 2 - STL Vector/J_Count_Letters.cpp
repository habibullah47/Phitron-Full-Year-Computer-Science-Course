#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> fre(26, 0);

  for (char c : s) {
    if (c >= 'a' && c <= 'z') {
      fre[c - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (fre[i] > 0) {
      cout << char('a' + i) << " : " << fre[i] << endl;
    }
  }
  return 0;
}
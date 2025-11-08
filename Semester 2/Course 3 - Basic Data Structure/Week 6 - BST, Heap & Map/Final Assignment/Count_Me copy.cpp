#include <cstddef>
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    map<string, int> mp;

    int cnt = 0;
    string st = "";
    while (ss >> word) {
      mp[word]++;

      if (mp[word] > cnt) {
        cnt = mp[word];
        st = word;
      }
    }

    cout << st << " " << cnt << endl;
  }
  return 0;
}
#include <iostream>
#include <map>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

void solve() {
  string s;
  getline(cin, s);

  stringstream ss(s);
  string word;
  map<string, int> mp;

  int cnnt = 0;
  while (ss >> word) {
    mp[word]++;
  }

  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << "+" << it->second << " ";
  }

  cout << endl;

  int mx;
  string mxS;

  int cnt = 0;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    if (it->second > cnt) {
      cnt = it->second;

      cout << it->first << " " << it->second << " ";
    }
  }

  cout << endl;
}

int main() {
  int t;
  cin >> t;
  t = t + 1;
  while (t--) {
    solve();
  }
  return 0;
}
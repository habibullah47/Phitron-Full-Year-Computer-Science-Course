#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
  list<string> l;
  string s;

  while (true) {
    cin >> s;
    if (s == "end") {
      break;
    }
    l.push_back(s);
  }

  int q;
  cin >> q;
  string command;
  string site;
  auto pos = l.begin();
  while (q--) {
    cin >> command;

    if (command == "visit") {
      cin >> site;
      auto it = find(l.begin(), l.end(), site);

      if (it == l.end()) {
        cout << "Not Available" << endl;
      } else {
        cout << site << endl;
        pos = it;
      }
    } else if (command == "prev") {
      if (pos != l.begin()) {
        pos--;
        cout << *pos << endl;
      } else {
        cout << "Not Available" << endl;
      }

    } else if (command == "next") {

      auto temp = pos;
      temp++;
      if (temp != l.end()) {
        pos = temp;
        cout << *pos << endl;
      } else {
        cout << "Not Available" << endl;
      }
    }
  }

  return 0;
}
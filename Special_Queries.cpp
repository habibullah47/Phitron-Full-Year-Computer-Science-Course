#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> q;
  int t;
  cin >> t;

  while (t--) {
    int cmd;
    cin >> cmd;

    if (cmd == 0) {
      string name;
      cin >> name;
      q.push(name);
    } else {
      if (q.empty()) {
        cout << "Invalid" << endl;
        continue;
      }

      cout << q.front() << endl;
      q.pop();
    }
  }
  return 0;
}
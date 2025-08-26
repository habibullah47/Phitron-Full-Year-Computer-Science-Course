#include <cstddef>
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  string target = "EGYPT";

  size_t pos;
  while ((pos = s.find(target)) != string::npos) {
    s.replace(pos, target.size(), " ");
  }

  cout << s << endl;

  return 0;
}

#include <iostream>
using namespace std;


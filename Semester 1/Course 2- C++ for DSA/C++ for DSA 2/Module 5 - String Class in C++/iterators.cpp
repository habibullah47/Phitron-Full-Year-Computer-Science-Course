#include <iostream>
#include <string>
using namespace std;

int main() {
  string remeber_every_time = "Fa firru Ilallah";

  // Iterator: to access every element
  for (int i = 0; i < remeber_every_time.size(); i++) {
    cout << remeber_every_time[i] << endl;
  }

  // iterator: actual iterator, this will use for data structure problem
  // string::iterator - this syntax will fix for it iterator. In latest version,
  // we can use auto for (string::iterator iter = remeber_every_time.begin();
  for (auto iter = remeber_every_time.begin(); iter < remeber_every_time.end();
       iter++) {
        // iterator ultimately a pointer
    cout << *iter << endl;
  }
  return 0;
}
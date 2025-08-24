#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {

  string reminder;
// For character arrays, use: cin.getline(reminder, 100);
// For std::string, use getline(cin, reminder).
// After reading input with cin, call cin.ignore() before getline to discard the leftover newline.
  int x;
  cin >> x;
  cin.ignore();
  getline(cin, reminder);

  cout << reminder << endl;

  cout << x << endl;
  return 0;
}
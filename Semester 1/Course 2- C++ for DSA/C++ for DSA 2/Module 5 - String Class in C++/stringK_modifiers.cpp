#include <iostream>
using namespace std;

int main() {
  string s = "La ilaha";
  s += ',';
  string s2 = " Illallah";
s[3] = 'e';
  s += s2;
  // s.append(s2);
  cout << s;
  return 0;
}
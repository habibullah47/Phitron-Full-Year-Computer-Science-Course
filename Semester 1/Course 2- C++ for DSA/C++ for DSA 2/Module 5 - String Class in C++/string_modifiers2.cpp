#include <iostream>
using namespace std;

int main() {
  string zikr = "Allahu Akbar";
  zikr.assign("Alhamdulillah");

  zikr = "Kuffar said: Do not obey your Allah";

  //zikr.erase(6, 0);
  zikr.replace(6, 0, "Shaitan");

  zikr.replace(6, 0, " And ");
  //zikr.insert(6, " And ");

  cout << zikr << endl;
  return 0;
}
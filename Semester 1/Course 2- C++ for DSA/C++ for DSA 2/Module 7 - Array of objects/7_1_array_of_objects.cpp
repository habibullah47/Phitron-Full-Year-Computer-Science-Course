#include <iostream>
#include <string>
using namespace std;

// Inspired by Ustadh Naseel Sharukh 40 hadith course
class talibulIlm {
public:
  string name;
  int roll;
  int weeklyMark;

  // we use constructor for saving time but here it take long time for the
  // reason we don't use constructor here.
  //   talibulIlm(string name, int roll, int weeklyMark) {
  //     this->name = name;
  //     this->roll = roll;
  //     this->weeklyMark = weeklyMark;
  //   }
};

int main() {
  int n;
  cin >> n;
  talibulIlm talib[n];
  for (int i = 0; i < n; i++) {
    // Every line have an enter, so for we need to use cin.ignore() here.
    cin.ignore();
    // getline demand cin.ignore();
    getline(cin, talib[i].name);
    cin >> talib[i].roll >> talib[i].weeklyMark;
  }
  for (int i = 0; i < n; i++) {
    cout << talib[i].name << " " << talib[i].roll << " " << talib[i].weeklyMark
         << endl;
  }
  return 0;
}

/*
Input:
3
Arman Uddin
1 95
Shihab
2 79
Habib
3 75
*/
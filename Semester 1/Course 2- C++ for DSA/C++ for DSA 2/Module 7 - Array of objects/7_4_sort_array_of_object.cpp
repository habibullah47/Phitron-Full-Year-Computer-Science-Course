#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

class TalibulIlm {
public:
  string name;
  int roll;
  int marks;
};
// this is our custom compare function
// this is an ascending order so we take left < right
bool cmp(TalibulIlm l, TalibulIlm r) {
  return l.marks < r.marks ? true : false;
}

int main() {
  int n;
  cin >> n;

  TalibulIlm talib[n];
  for (int i = 0; i < n; i++) {
    cin >> talib[i].name >> talib[i].roll >> talib[i].marks;
  }

  // sort of normal array and object array are not same
  // So we need A CUSTOM COMPARE FUNCTION
  sort(talib, talib + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << talib[i].name << " " << talib[i].roll << " " << talib[i].marks
         << endl;
  }
}

/*
Input:
5
Arman 1 95
Shihab 2 79
Habib 3 60
Gias 4 98
Abdullah 5 96

Output:
Habib 3 60
Shihab 2 79
Arman 1 95
Abdullah 5 96
Gias 4 98

*/
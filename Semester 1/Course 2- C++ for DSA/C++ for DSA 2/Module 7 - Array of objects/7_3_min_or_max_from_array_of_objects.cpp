#include <climits>
#include <iostream>
using namespace std;

class TalibulIlm {
public:
  string name;
  int roll;
  int marks;
};

int main() {
  int n;
  cin >> n;

  TalibulIlm talib[n];
  for (int i = 0; i < n; i++) {
    cin >> talib[i].name >> talib[i].roll >> talib[i].marks;
  }

  int mn = INT_MAX;
  int index = 0;

  // Identifing minimum mark and name
  for (int i = 0; i < n; i++) {
    mn = min(talib[i].marks, mn);
    if (mn == talib[i].marks) {
      index = i;
    }
  }

  cout << talib[index].name << " " << talib[index].roll << " "
       << "Minimum mark: " << mn << endl;

  // Identifying maximum object
  TalibulIlm mx;
  mx.marks = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (talib[i].marks > mx.marks) {
      mx = talib[i];
    }
  }

  cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
  return 0;
}
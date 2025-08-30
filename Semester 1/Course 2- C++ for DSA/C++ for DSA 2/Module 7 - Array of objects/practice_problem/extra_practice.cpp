#include <algorithm>
#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int roll;
  int marks;
};

bool cmp(Student a, Student b) {
  return (a.marks == b.marks) ? a.roll > b.roll : a.marks < b.marks;
}

int main() {
  int n;
  cin >> n;
  Student student[n];

  for (int i = 0; i < n; i++) {
    cin >> student[i].name >> student[i].roll >> student[i].marks;
  }

  sort(student, student + n, cmp);

  // Print

  for (int i = 0; i < n; i++) {
    cout << student[i].name << " " << student[i].roll << " " << student[i].marks
         << endl;
  }
  return 0;
}
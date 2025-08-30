#include <algorithm>
#include <iostream>
using namespace std;
class Student {
public:
  string name;
  int roll;
  int marks;
};

bool compare(Student x, Student y) {

  return (x.marks == y.marks) ? x.roll < y.roll : (x.marks > y.marks);
}
int main() {
  int n;
  cin >> n;

  Student std[n];

  for (int i = 0; i < n; i++) {
    cin >> std[i].name >> std[i].roll >> std[i].marks;
  }

  sort(std, std + n, compare);

  for (int i = 0; i < n; i++) {
    cout << std[i].name << " " << std[i].roll << " " << std[i].marks << endl;
  }

  return 0;
}
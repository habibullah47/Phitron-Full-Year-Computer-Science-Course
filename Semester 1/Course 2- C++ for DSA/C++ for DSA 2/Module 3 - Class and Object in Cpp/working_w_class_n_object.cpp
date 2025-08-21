#include <iostream>
using namespace std;

class Student {
public:
  char name[100];
  int roll;
  int cls;
  double gpa;

  // constructor
  Student(int r, int c, double g) {
    roll = r;
    cls = c;
    gpa = g;
  }
};

int main() {
  Student Muslim(1, 7, 5.00);
  Student Kuffar(10, 7, 2.00);

  //   cin.getline(s.name, 100);
  //   cin >> s.roll >> s.gpa;
  //   cin.ignore();
  //   cin.getline(k.name, 100);
  //   cin >> k.roll >> k.gpa;

  cout << Muslim.cls << " " << Muslim.roll << " " << Muslim.gpa << endl;
  cout << Kuffar.cls << " " << Kuffar.roll << " " << Kuffar.gpa << endl;
  return 0;
}
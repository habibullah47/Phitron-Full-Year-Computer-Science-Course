#include <iostream>
using namespace std;

class Student {
public:
  char name[100];
  int roll;
  int cls;
  double gpa;

  // constructor
  Student(int roll, int cls, double gpa) {
    //This keyword use for making constructor name same as class name.
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

int main() {
  Student Muslim(1, 7, 5.00);
  Student Kuffar(10, 7, 2.00);

  cout << Muslim.cls << " " << Muslim.roll << " " << Muslim.gpa << endl;
  cout << Kuffar.cls << " " << Kuffar.roll << " " << Kuffar.gpa << endl;
  return 0;
}
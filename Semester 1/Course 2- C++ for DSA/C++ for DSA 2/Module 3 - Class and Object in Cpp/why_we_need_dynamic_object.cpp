#include <iostream>
using namespace std;

class Student {
public:
  char name[100];
  int roll;
  int cls;
  double gpa;

  // Constructor: initializes roll, cls, and gpa
  Student(int roll, int cls, double gpa) {
    // 'this' keyword is used to refer to the current object's members
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

// Returning pointer to a local object is unsafe because the object is destroyed
// when the function ends
Student *fun() {
  Student Muslim(1, 7, 5.00);
  Student *p = &Muslim;
  return p; // Warning: Returning pointer to local variable leads to undefined
            // behavior
}

int main() {

  Student Kuffar(10, 7, 2.00);
  // Pointer
  Student *Muslim = fun();
  cout << Muslim->cls << " " << Muslim->roll << " " << Muslim->gpa << endl;
  cout << Kuffar.cls << " " << Kuffar.roll << " " << Kuffar.gpa << endl;
  return 0;
}

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


Student *fun() {
      // Muslim is a Pointer, and new Student is a dynamic object
  Student *Muslim = new Student(1, 7, 5.00);
  
  return Muslim; 
}

int main() {

  Student Kuffar(10, 7, 2.00);

  Student *Muslim = fun();
  cout << Muslim->cls << " " << Muslim->roll << " " << Muslim->gpa << endl;
  cout << Kuffar.cls << " " << Kuffar.roll << " " << Kuffar.gpa << endl;
  return 0;
}

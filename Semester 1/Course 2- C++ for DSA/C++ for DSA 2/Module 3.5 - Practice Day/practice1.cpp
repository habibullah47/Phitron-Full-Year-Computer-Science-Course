
#include <cstring>
#include <iostream>
using namespace std;

class Student {
public:
  char name[100];
  int roll;
  char section;
  int math_marks;
  int cls;

  Student(char name[100], int roll, char section, int math_marks, int cls) {
    strcpy(this->name, name);
    this->roll = roll;
    this->section = section;
    this->math_marks = math_marks;
    this->cls = cls;
  }
};

int main() {
  Student s[3] = {
      Student("Habib", 1, 'A', 100, 12),
      Student("Arman", 3, 'A', 90, 12),
      Student("Gias", 2, 'A', 95, 12),
  };

  //
  int max_index = 0;
  for (int i = 0; i < 3; i++) {
    if (s[i].math_marks > s[max_index].math_marks) {
      max_index = i;
    }
  }



  return 0;
}
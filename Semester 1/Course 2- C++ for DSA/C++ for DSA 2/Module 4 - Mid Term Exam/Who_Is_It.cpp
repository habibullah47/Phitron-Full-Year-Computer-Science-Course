#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

class Student {
public:
  int id;
  string name;
  char section;
  int total_marks;

  Student(int id, string name, char section, int total_marks) {
    this->id = id;
    this->name = name;
    this->section = section;
    this->total_marks = total_marks;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    Student s[3] = {
        Student(0, "", 'A', 0),
        Student(0, "", 'A', 0),
        Student(0, "", 'A', 0),
    };

    for (int i = 0; i < 3; i++) {
      int id, total_marks;
      string name;
      char section;
      cin >> id >> name >> section >> total_marks;
      s[i] = Student(id, name, section, total_marks);
    }
    int m = INT_MIN;
    for (int i = 0; i < 3; i++) {
      int tmp = max(s[i].total_marks, s[i + 1].total_marks);
      if (tmp > m) {
        m = tmp;
      }
    }

    // Your task is to determine and print the details of the student who
    // achieved the highest total marks.
    for (int i = 0; i < 3; i++) {
      if (s[i].total_marks == m) {
        cout << s[i].id << " " << s[i].name << " " << s[i].section << " "
             << s[i].total_marks << endl;
        break;
      }
    }
  }
  return 0;
}
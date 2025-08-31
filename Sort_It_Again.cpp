#include <algorithm>
#include <iostream>
using namespace std;

/*
sort the students data according to the eng_marks in descending order. If
multiple student have the same eng_marks then sort them according to the
math_marks in descending order. If multiple student have the same math_marks
then sort them accoding to the id */

class Student {
public:
  string nm;
  int cls;
  char s;
  int id;
  int math_marks;
  int english;
};

// bool cmp(Student l, Student r) {
//   if (l.english == r.english) {
//     if (l.math_marks == r.math_marks) {
//       return l.id < r.id;
//     } else {
//       return l.math_marks > r.math_marks;
//     }
//   } else {
//     return l.english > r.english;
//   }
// }

// OR Ternary mess
bool cmp(Student l, Student r) {
  return (l.english == r.english)
             ? ((l.math_marks == r.math_marks) ? (l.id < r.id)
                                               : (l.math_marks > r.math_marks))
             : (l.english > r.english);
}
int main() {
  int n;
  cin >> n;

  Student std[n];

  for (int i = 0; i < n; i++) {

    cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id >>
        std[i].math_marks >> std[i].english;
  }

  sort(std, std + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " "
         << std[i].id << " " << std[i].math_marks << " " << std[i].english
         << endl;
  }

  return 0;
}
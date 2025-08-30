#include <algorithm>
#include <iostream>
using namespace std;

/*
You will be given data for N students, where each student will have a name (nm),
class (cls), section (s), student ID (id), math marks (math_marks), and English
marks (eng_marks).*/

class Student {
public:
  string nm;
  int cls;
  char s;
  int id;
  int math_marks;
  int english;
  int total_mark = 0;
};

bool cmp(Student l, Student r) {
  return (l.total_mark == r.total_mark) ? l.id < r.id
                                        : (l.total_mark > r.total_mark);
}
int main() {
  int n;
  cin >> n;

  Student std[n];

  for (int i = 0; i < n; i++) {

    cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id >>
        std[i].math_marks >> std[i].english;
    std[i].total_mark = std[i].math_marks + std[i].english;
  }

  sort(std, std + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " "
         << std[i].id << " " << std[i].math_marks << " " << std[i].english
         << endl;
  }

  return 0;
}
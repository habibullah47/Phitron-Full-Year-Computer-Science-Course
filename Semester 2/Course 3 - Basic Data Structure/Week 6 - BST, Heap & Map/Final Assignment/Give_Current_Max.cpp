#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

class student {
public:
  string name;
  int roll, marks;

  student(string name, int roll, int marks) {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
};

class cmp {
public:
  bool operator()(student l, student r) {
    return (l.marks == r.marks) ? l.roll > r.roll : l.marks < r.marks;
  }
};

int main() {
  priority_queue<student, vector<student>, cmp> maxHeap;

  int n;
  cin >> n;
  while (n--) {
    string name;
    cin >> name;
    int roll, marks;
    cin >> roll >> marks;

    student obj(name, roll, marks);
    maxHeap.push(obj);
  }

  int q;
  cin >> q;
  while (q--) {
    int comm;
    cin >> comm;

    if (comm == 0) {
      string name;
      cin >> name;
      int roll, marks;
      cin >> roll >> marks;
      student obj(name, roll, marks);
      maxHeap.push(obj);
      cout << maxHeap.top().name << " " << maxHeap.top().roll << " "
           << maxHeap.top().marks << endl;
    } else if (comm == 1) {
      if (maxHeap.empty()) {
        cout << "Empty" << endl;
      } else
        cout << maxHeap.top().name << " " << maxHeap.top().roll << " "
             << maxHeap.top().marks << endl;
    } else if (comm == 2) {
      maxHeap.pop();
      if (maxHeap.empty()) {
        cout << "Empty" << endl;
      } else
        cout << maxHeap.top().name << " " << maxHeap.top().roll << " "
             << maxHeap.top().marks << endl;
    }
  }
  return 0;
}
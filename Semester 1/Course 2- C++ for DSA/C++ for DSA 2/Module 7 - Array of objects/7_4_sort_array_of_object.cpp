#include <algorithm>
#include <iostream>
using namespace std;

/*
 * Topic: Sorting an Array of Objects (with custom comparator)
 *
 * Key Idea:
 * - Normal arrays (like int[]) can be sorted directly.
 * - For arrays of objects, we must define HOW to compare two objects.
 * - This is done by writing a "custom comparator function".
 */

class TalibulIlm {
public:
  string name;
  int roll;
  int marks;
};

/*
 * Custom Comparator Function
 * ---------------------------
 * Rules:
 * 1. Sort primarily by marks (ascending).
 * 2. If two students have the same marks,
 *    sort by roll number (ascending).
 */

bool cmp(TalibulIlm l, TalibulIlm r) {

  // return l.marks < r.marks ? true : false;
  // return l.marks < r.marks;


  // 1st way: If there have some marks is same and then we want roll wise ascending order
  //   if (l.marks < r.marks) {
  //     return true;
  //   } else if (l.marks > r.marks) {
  //     return false;
  //   } else {
  //     if (l.roll < r.roll) {
  //       return true;
  //     } else {
  //       return false;
  //     }
  //   }

  // 2nd way: Make more sorter
  //   if (l.marks == r.marks) {
  //     return l.roll < r.roll;
  //   } else {
  //     return l.marks < r.marks;
  //   }

  // 3rd way: Shortest version using ternary operator:
  return (l.marks == r.marks) ? l.roll < r.roll : l.marks < r.marks;
}

int main() {
  int n;
  cin >> n;

  TalibulIlm talib[n];
  for (int i = 0; i < n; i++) {
    cin >> talib[i].name >> talib[i].roll >> talib[i].marks;
  }

  // sort of normal array and object array are not same
  // So we need A CUSTOM COMPARE FUNCTION
  sort(talib, talib + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << talib[i].name << " " << talib[i].roll << " " << talib[i].marks
         << endl;
  }
}

/*
Example Input:
5
Arman 1 95
Shihab 2 79
Habib 3 60
Gias 4 98
Abdullah 5 96

Expected Output (sorted by marks → roll):
Habib 3 60
Shihab 2 79
Arman 1 95
Abdullah 5 96
Gias 4 98
*/



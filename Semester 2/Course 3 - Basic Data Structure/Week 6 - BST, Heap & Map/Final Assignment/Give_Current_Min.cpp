#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<>> minHeap;

  int n;
  cin >> n;
  while (n--) {
    int val;
    cin >> val;
    minHeap.push(val);
  }

  if (!n) {
    cout << "Empty" << endl;
    return 0;
  }

  int q;
  cin >> q;
  while (q--) {
    int comm;
    cin >> comm;

    if (comm == 0) {
      int x;
      cin >> x;
      minHeap.push(x);
      cout << minHeap.top() << endl;
    } else if (comm == 1) {
      if (minHeap.empty()) {
        cout << "Empty" << endl;
      } else
        cout << minHeap.top() << endl;
    } else if (comm == 2) {
      minHeap.pop();
      if (minHeap.empty()) {
        cout << "Empty" << endl;
      } else
        cout << minHeap.top() << endl;
    }
  }

  return 0;
}
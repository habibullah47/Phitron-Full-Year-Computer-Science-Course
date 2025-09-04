#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> pre(n);
  pre[0] = a[0];

  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  int total = pre[n-1];
  int equilibIndex = -1; //Why equilibIndex value is -1?


  // MVP binary search style
  int l = 0;
  int r = n - 1;
  while (l <= r) {
    int mid = (l + r) / 2;

    int sumP = (mid > 0 ? pre[mid - 1] : 0);   // left sum
    int sumQ = total - pre[mid];              // right sum 

    if (sumP == sumQ) {
      equilibIndex = mid;
      break; // stop at first found
    } else if (sumP < sumQ) {
      l = mid + 1; // need bigger left sum
    } else {
      r = mid - 1; // need smaller left sum
    }
  }

  cout << equilibIndex << endl;

  return 0;
}

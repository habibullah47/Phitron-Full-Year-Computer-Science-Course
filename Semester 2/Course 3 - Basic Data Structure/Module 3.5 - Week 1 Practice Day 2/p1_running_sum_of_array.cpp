#include <iostream>
#include <vector>
using namespace std;

void runningSum() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  vector<int> pre(n);
  pre[0] = nums[0];

  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + nums[i];
  }
  for (int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  }
}

int main() {
  runningSum();
  return 0;
}
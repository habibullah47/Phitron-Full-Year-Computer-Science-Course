#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    double x, y;
    cin >> x >> y;

    double cells_per_screen = 15;

    // 1st: y screen count
    double total_screens = ceil(y / 2);

    // 2nd:
    double total_cells = total_screens * cells_per_screen;

    double cells_used_by_2x2 = 4 * y;
    double remaining_cells = total_cells - cells_used_by_2x2;

    // 3rd:
    double x_extra, extra_screens = 0;
    if (x > remaining_cells) {
      x_extra = x - remaining_cells;
      extra_screens = ceil(x_extra / cells_per_screen);
    }

    // Final
   
      cout << (int)total_screens + extra_screens << endl;
  }
  return 0;
}
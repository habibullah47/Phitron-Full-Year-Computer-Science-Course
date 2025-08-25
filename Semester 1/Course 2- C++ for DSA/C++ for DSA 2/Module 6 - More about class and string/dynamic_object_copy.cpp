#include <iostream>
using namespace std;

class OIC {
public:
  string country;
  int population; /*in million*/

  OIC(string country, int population) {
    this->country = country;
    this->population = population;
  }
};
int main() {
  OIC *member1 = new OIC{"Saudi Arabia", 30};
  OIC *member2 = new OIC{"Bangladesh", 200};
  // After assigning *member2 = *member1, member2 now holds a copy of member1's
  // data. Deleting member1 only frees its memory; member2 still has its own
  // copy of the data.
  *member2 = *member1;

  cout << member2->country;
  delete member1;
  return 0;
}

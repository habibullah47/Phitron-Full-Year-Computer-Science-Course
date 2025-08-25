#include <iostream>
using namespace std;

int main() {
    string one = "Astaggirullah";
    // Direct initialization
    string two("Subhanallahi wabihamdihi");
    // First 5 characters
    string three("Allahu Akbar", 5);
    // Copy from index 5
    string coping_two(two, 5);
    // 5 'A' characters
    string charac(5, 'A');

    cout << three;
    return 0;
}

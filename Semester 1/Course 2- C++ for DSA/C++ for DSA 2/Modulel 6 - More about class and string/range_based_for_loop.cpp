#include <iostream>
using namespace std;

int main() {

    string cosmopoliton_art = "Xing Xiang";

    // Index-based for loop:
    // This loop gives you direct access to each character's index in the string.
    // It's useful when you need to know the position of each character,
    // or when you want to modify characters at specific indices.
    //   for (int i = 0; i != cosmopoliton_art.size(); i++) {
    //     cout << cosmopoliton_art[i] << endl;
    //   }

    // Range-based for loop:
    // This loop iterates over each character in the string directly,
    // making the code more concise and readable when you only need the values.
    // However, it does not provide access to the index of each character,
    // so it's less suitable for problems where you need to track or modify positions.
    for (char c : cosmopoliton_art) {
        cout << c << endl;
    }
    return 0;
}
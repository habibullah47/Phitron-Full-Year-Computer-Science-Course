#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string parallel_world;
    getline(cin, parallel_world);

    stringstream ss(parallel_world);

    string word;
    // Handle the first word separately to avoid leading space in output
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        // Example: Input: I love you
        // Output: I evol uoy
        cout << " " << word;
    }
    cout << endl;
    return 0;
}
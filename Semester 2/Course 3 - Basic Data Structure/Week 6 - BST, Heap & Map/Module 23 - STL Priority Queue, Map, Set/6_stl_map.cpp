#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["Habib"] = 2;
    mp["Alamin"] = 370;
    mp["Nafiz"] = 1;

    for(auto it = mp.begin(); it!= mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    if(mp.count("Habib")) cout << " Yes\n";
    else cout << "No";

    return 0;
}
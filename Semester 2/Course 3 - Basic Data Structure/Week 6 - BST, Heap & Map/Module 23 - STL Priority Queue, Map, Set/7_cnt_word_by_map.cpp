#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    map<string, int> mp;

    while(ss >> word){ //NlogN
        mp[word]++; //logN
    }

    for (auto it = mp.begin(); it != mp.end(); it++){//NlogN
        cout << it->first << " " << it->second << endl; //logN
    }
    
    return 0;
}
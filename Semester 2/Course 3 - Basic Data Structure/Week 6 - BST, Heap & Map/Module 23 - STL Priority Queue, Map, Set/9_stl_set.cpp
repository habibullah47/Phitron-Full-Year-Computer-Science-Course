#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s, s1;

    int n;
    cin >> n;

    while(n--){
        int val;
        cin >> val;
        s.insert(val); //logN
        s1.insert(val);
    }
    for(auto it = s.begin(), it1 = s1.begin(); it != s.end(); it++, it1++){
        cout <<"it = "<< *it << " it1 = " << *it1 << endl; 
    }

    if(s.count(0)) cout << "Y"; //logN
    else cout << "N";

    
    return 0;
}
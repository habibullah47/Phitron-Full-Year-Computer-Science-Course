#include <iostream>
#include <set>
using namespace std;

void solve(){
 set<int> s;
    int n;
    cin >> n;

    while(n--){
    int val;
    cin >> val;
    s.insert(val);
    }

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    cout << endl;
}

int main()
{
   int t;
   cin >> t;
   while (t--) {
   solve();
   }
    return 0;
}
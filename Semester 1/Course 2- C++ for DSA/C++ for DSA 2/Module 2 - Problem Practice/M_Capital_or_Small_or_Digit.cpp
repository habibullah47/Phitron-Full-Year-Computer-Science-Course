#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if (a < 58)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (a < 91)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (a < 123)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    return 0;
}
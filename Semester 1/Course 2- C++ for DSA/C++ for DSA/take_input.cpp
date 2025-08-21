#include <iostream>
using namespace std;

int main()
{
    int x;
    char a;
    double b;
//If we want to print int value of a char, We have two way,
// 1st way is declare with a int value, 2nd way is typecasting.

//1st way
// int ascii = a;
//     cin >> x >> a >> b;
//     cout << x << " " << ascii << endl
//          << b << endl;


//2nd way Typecasting
    cin >> x >> a >> b;
    cout << x << " " << (int)a << endl
         << b << endl;
    return 0;
}
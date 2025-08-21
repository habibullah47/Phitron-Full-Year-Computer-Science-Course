#include <iostream>
using namespace std;

int *p;
void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun is " << *p << endl;
    return;
}

int main()
{
fun();
    cout << "Main is " << *p << endl;
}
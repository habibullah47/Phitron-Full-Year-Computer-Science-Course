#include <iostream>
using namespace std;

int *fun()
{
    int *arr = new int[5]; // Allocate dynamic array

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    return arr; // This will cause undefined behavior
}

int main()
{
    int *ptr = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i];
    }
}

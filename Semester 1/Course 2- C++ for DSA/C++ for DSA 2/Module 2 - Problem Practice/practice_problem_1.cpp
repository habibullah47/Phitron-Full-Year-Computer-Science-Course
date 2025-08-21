#include <iostream>
using namespace std;

int *get_array(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    return array;
}

int main()
{
    int n;
    cin >> n;

    int *a = get_array(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
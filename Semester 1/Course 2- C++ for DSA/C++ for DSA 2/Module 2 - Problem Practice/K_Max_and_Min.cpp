#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maxValue = array[0];
    int minValue = array[0];
    for (int i = 0; i < n; i++)
    {
        maxValue = max(maxValue, array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        minValue = min(minValue, array[i]);
    }

    cout << minValue << " " << maxValue;
    return 0;
}
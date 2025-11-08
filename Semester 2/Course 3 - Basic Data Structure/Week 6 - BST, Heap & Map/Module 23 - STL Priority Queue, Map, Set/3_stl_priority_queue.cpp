#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<>> maxHeap;
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(30);
    cout << maxHeap.top() << endl;
    maxHeap.push(100);
    cout << maxHeap.top() << endl;
    maxHeap.pop();
    maxHeap.pop();
    cout << maxHeap.top() << endl;
    cout << maxHeap.size();
    return 0;
}
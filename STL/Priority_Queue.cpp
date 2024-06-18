#include <bits/stdc++.h>

using namespace std;

int main()
{
    //>> Max-Heap
    priority_queue<int> maxHeap;

    //! O(log n)
    maxHeap.push(2);
    maxHeap.push(3);
    maxHeap.push(5);

    //! O(1)
    cout << maxHeap.top() << endl;

    //! O(log n)
    maxHeap.pop();

    //! O(1)
    cout << maxHeap.top() << endl;

    cout << "-----------" << endl;

    //>> Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    //! O(log n)
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(5);

    //! O(1)
    cout << minHeap.top() << endl;

    //! O(log n)
    minHeap.pop();

    //! O(1)
    cout << minHeap.top() << endl;

    return 0;
}
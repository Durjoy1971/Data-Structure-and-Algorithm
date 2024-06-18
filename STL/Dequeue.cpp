#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(5);
    dq.push_back(50);
    dq.push_back(500);
    dq.push_front(2);
    dq.push_front(20);

    //! Time Complexity: O(1)
    cout << dq.front() << " " << dq.back() << endl;

    for (auto x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
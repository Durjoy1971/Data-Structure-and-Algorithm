#include <bits/stdc++.h>

using namespace std;

int main()
{
    //! Time Complexity ==> O(1)

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;

    return 0;
}
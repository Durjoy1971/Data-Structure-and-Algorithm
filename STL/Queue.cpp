#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Durjoy");
    q.push("Joy");
    q.push("Bijoy");
    q.push("Pranjoy");

    //! Time Complexity: O(1)
    cout << q.front() << " " << q.back() << endl;

    q.pop();

    cout << q.front() << " " << q.back() << endl;

    return 0;
}
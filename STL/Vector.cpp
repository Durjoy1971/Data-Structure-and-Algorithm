#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};

    ar.push_back(6);

    //! Element Access O(1)
    cout << ar.front() << " " << ar.back() << endl;

    //! Iterator
    for (auto x : ar)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
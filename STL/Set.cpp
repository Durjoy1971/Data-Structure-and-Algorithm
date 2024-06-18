#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;

    //! O(Log n)
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // Duplicate element, won't be added

    // Accessing elements
    cout << "Set elements: ";
    for (int elem : s)
    {
        cout << elem << " ";
    }
    cout << endl;

    //! O(Log n)
    auto it = s.find(20);
    if (it != s.end())
    {
        cout << "Element 20 found in the set." << endl;
    }
    else
    {
        cout << "Element 20 not found in the set." << endl;
    }

    //! O(Log n)
    s.erase(20);

    // Checking if the set is empty
    if (s.empty())
    {
        cout << "Set is empty." << endl;
    }
    else
    {
        cout << "Set is not empty." << endl;
    }

    // Size of the set
    cout << "Size of the set: " << s.size() << endl;

    //! O(Log n)
    cout << s.count(5) << " " << s.count(10) << endl;

    return 0;
}
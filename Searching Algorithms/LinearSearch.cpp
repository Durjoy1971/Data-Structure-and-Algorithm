#include <iostream>

using namespace std;

bool linearSearch(int data[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == key)
            return true;
    }

    return false;
}

int main()
{
    int data[] = {2, 5, 8, 20};
    int key = 5;
    int size = sizeof(data) / sizeof(data[0]);

    if (linearSearch(data, key, size))
    {
        cout << key << " is found in Data" << endl;
    }
    else
    {
        cout << "Key Not Found" << endl;
    }

    return 0;
}
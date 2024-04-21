#include <iostream>

using namespace std;

bool binarySearch(int data[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (data[mid] == key)
            return true;
        else if (data[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    int data[] = {1, 3, 5, 9, 13, 16, 18, 22, 26, 35};
    int key = 16;
    int size = sizeof(data) / sizeof(data[0]);

    if (binarySearch(data, size, key))
    {
        cout << key << " in array of data" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }

    return 0;
}
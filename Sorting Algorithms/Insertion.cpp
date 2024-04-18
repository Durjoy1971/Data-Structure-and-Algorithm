#include <iostream>

using namespace std;

void InsertionSort(int data[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = data[step];
        int previous = step - 1;
        while (previous >= 0 && data[previous] > key)
        {
            data[previous + 1] = data[previous];
            previous--;
            cout << previous << endl;
        }
        data[previous + 1] = key;
    }

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int data[] = {2, 10, 2, 1};
    int data[] = {-2, 45, 0, 0, 11, -9};

    int size = sizeof(data) / sizeof(data[0]);

    InsertionSort(data, size);

    return 0;
}
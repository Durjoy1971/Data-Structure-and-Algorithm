#include <iostream>

using namespace std;

void selectionSort(int data[], int size)
{
    for (int step = 0; step < size; step++)
    {
        int min_index = step;
        for (int i = step + 1; i < size; i++)
        {
            if (data[i] < data[min_index])
            {
                min_index = i;
            }
        }

        if (min_index != step)
        {
            int temp = data[step];
            data[step] = data[min_index];
            data[min_index] = temp;
        }
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

    selectionSort(data, size);

    return 0;
}
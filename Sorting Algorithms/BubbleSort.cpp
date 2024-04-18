#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int step = 1; step <= size; step++)
    {
        bool swapped = false; // Optional: optimized bubble sort
        for (int i = 0; i < size - step; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    // print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int data[] = {-2, 45, 0, 0, 11, -9};

    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
}
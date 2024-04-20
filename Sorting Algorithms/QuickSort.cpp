#include <iostream>
using namespace std;

int partition(int array[], int start, int end)
{
    int pivot = array[end];

    int greater_pointer = start;

    for (int cur = start; cur < end; cur++)
    {
        if (array[cur] <= pivot)
        {
            swap(array[cur], array[greater_pointer]);
            greater_pointer++;
        }
    }

    swap(array[greater_pointer], array[end]);

    return greater_pointer;
}

void quickSort(int array[], int start, int end)
{
    if (start >= end)
        return;

    int pivot = partition(array, start, end);

    quickSort(array, start, pivot - 1);
    quickSort(array, pivot + 1, end);
}

int main()
{
    int data[] = {-2, 45, 0, 0, 11, -9};
    // int data[] = {6, 5, 12};

    int size = sizeof(data) / sizeof(data[0]);

    quickSort(data, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << data[i] << " ";
    cout << endl;
}
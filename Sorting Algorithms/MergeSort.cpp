#include <iostream>
using namespace std;

void merge(int array[], int start, int mid, int end)
{
    int left_array[mid - start + 1], right_array[end - mid];

    for (int i = 0; i < mid - start + 1; i++)
        left_array[i] = array[start + i];

    for (int i = 0; i < end - mid; i++) // end - (mid + 1) + 1
        right_array[i] = array[mid + 1 + i];

    int i = 0, j = 0, k = start;

    while (i < mid - start + 1 && j < end - mid)
    {
        if (left_array[i] <= right_array[j])
            array[k++] = left_array[i++];
        else
            array[k++] = right_array[j++];
    }

    while (i < mid - start + 1)
        array[k++] = left_array[i++];

    while (j < end - mid)
        array[k++] = right_array[j++];
}

void mergeSort(int array[], int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;

    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);

    merge(array, start, mid, end);
}

int main()
{
    int data[] = {-2, 45, 0, 0, 11, -9};
    // int data[] = {6, 5, 12};

    int size = sizeof(data) / sizeof(data[0]);

    mergeSort(data, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << data[i] << " ";
    cout << endl;
}
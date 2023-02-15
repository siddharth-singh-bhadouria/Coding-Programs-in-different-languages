// Bubble sort in C++

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < (size - i); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}

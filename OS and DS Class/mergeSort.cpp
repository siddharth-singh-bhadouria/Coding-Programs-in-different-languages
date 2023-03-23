// merge sort in c++
#include <iostream>
using namespace std;

// mergeing two subarrays
void merge(int arr[], int p, int q, int r)
{
    // create two arrays
    // defining array lengths
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }

    for (int j = 0; j < n2; j++)
    {
        M[j] = arr[q + 1 + j];
    }

    // maintain current index of subarrays and main array

    int i = 0, j = 0, k = p;

    // untill we each either end of either l or m pick larger among elements and sort

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // pick up the reamaining elments
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + (r - 1)) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 5, 6, 3, 23, -1};
    int n = 6;
    mergeSort(arr, 0, n - 1);

    cout << "sorted array" << endl;
    printArray(arr, n);
}

// int main()
// {
//     int arr[]= {6,5,12,10,9,1};

// }

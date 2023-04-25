#include<iostream>
using namespace std;
void insertionSortRecursive(int arr[], int n) {
    // Base case: if array size is 1 or less, it is already sorted
    if (n <= 1) {
        return;
    }

    // Recursively sort the first n-1 elements of the array
    insertionSortRecursive(arr, n-1);

    // Insert the last element of the unsorted part into the sorted part
    int last = arr[n-1];
    int j = n-2;

    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}
int arr[4]={1,6,2,12};

int main(){
    insertionSortRecursive(arr,4);
    for(int i=0;i<4;++i)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int arr[4]={1,6,2,12};

int main(){
    insertionSort(arr,4);
    for(int i=0;i<4;++i)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
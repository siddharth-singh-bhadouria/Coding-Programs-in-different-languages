#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int min_idx;
    for (int i = 0; i < n-1; i++) {
        min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
    }
}
int arr[4]={1,6,2,12};

int main(){
    selectionSort(arr,4);
    for(int i=0;i<4;++i)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
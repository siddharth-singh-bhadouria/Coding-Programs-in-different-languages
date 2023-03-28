#include <iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 

        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}



int main()
{
    int n,x;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
         cin>>arr[i];
    }
    cout<<"Enter the number to be searched:"<<endl;
    cin>>x;
    int result=binarySearch(arr,0,n-1,x);
    (result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result << endl;
    
    return 0;
}
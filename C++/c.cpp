#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n,max = INT_MIN;
    cout<<"Enter the size of array\n";
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n ; i++)
    {
       cout<< "Element"<<i+1<<"=";
       cin>>arr[i];
       if(arr[i]>max)
       max=arr[i];
    }

    cout<<max<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
     cout<<"Enter the elements for arr1:\n";
    for (int i = 0; i < n ; i++)
    {
       cout<< "Element"<<i+1<<"=";
       cin>>arr1[i];
    }
     cout<<"Enter the elements for arr2:\n";
    for (int i = 0; i < n ; i++)
    {
       cout<< "Element"<<i+1<<"=";
       cin>>arr2[i];
    }

    cout<<"\n\nSum=";
    for (int i = 0; i < n ; i++)
    {
       cout<<"\t"<<arr1[i]+arr2[i]<<endl;
    }


    

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
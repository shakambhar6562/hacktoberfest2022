#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<" ";
    }
}
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter the number of elements in the array";
    cin>>n;
    cout<<"\nEnter the elements\n";
    int count[n];
    int arr[n];
    k=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        count[k++]=arr[i]-arr[i-1];
    }
    int max=1;
    for(i=0;i<k;i++)
    {
        int counter=0;
        for(j=i;j<k;j++)
        {
            if(arr[j]==arr[j++])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        if(counter>max)
        {
            max=counter;
        }

    }
    cout<<max+1<<" ";
    return 0;

}
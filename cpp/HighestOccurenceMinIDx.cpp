#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr1[n];
    int max=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        if(arr1[i]>max)
        {
            max=arr1[i];
        }
    }
    int index[max+1];
    for(i=0;i<=max;i++)
    {
        index[i]=-1;
    }
    cout<<endl;
    int minindex=INT_MAX;
    for(i=0;i<n;i++)
    {
        int number=arr1[i];
        if(index[number]==-1)
        {
            index[number]=i;
        }
        else
        {
            if(index[number]<minindex)
            {
                minindex=index[number];
            }
        }
    }
    if(minindex==INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<minindex+1<<" ";
    }
    return 0;
}
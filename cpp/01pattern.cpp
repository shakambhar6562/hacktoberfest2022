#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the numner of rows";
    cin>>n;
    int start;
    int end;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<1<<" ";
                }     
                else
                {
                    cout<<0<<" ";
                }
            }
            else
            {
                if(j%2==0)
                {
                    cout<<0<<" ";
                }     
                else
                {
                    cout<<1<<" ";
                }
            
            }
        }
        cout<<"\n";

    }
}
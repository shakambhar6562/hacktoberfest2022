#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,n;
    string str1,str2;
    cout<<"Enter the first binary number and the second";
    cin>>str1>>str2;
    string finals="";
    int s1=str1.length();
    int s2=str2.length();
    int carry=0;
    for(i=s1-1;i>=0;i--)
    {
        if(str1[i]=='0' && str2[i]=='0')
        {
            if(carry=1)
            {
                finals+='1';
                carry=0;
            }
            else
            {
            finals+='0';
            }
        }
        if(str1[i]=='0' && str2[i]=='1')
        {
            if(carry==1)
            {
                finals=finals+'0';
                carry=1;
            }
            else{
            finals+='1';
            }
        }
        if(str1[i]=='1' && str2[i]=='0')
        {
            if(carry==1)
            {
                finals=finals+'0';
                carry=1;
            }
            else {

            finals+='1';
            }
        }
        if(str1[i]=='1' && str2[i]=='1')
        {
            if(carry==1)
            {
                finals=finals+'1';
                carry=1;
            }
            else
            {
            finals+='0';
            carry=1;
            }
        }
    }
    if(carry=0)
    {
        cout<<finals<<" ";
    }
    else
    {
        finals+='1';
        reverse(finals.begin(),finals.end());
        cout<<finals<<" ";
    }
    return 0;
}
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char arr[100001];
    int n,i,c=0,c1=0;
    cin>>n;
    cin>> arr;
    for(i=0;i<n;i++)
    {
        if(arr[i]=='A')
        {
            c++;
        }
        else  if(arr[i]=='D')
        {
            c1++;
        }
    }
    if(c>c1)
    {
        cout<<"Anton";
    }
    else if(c1>c)
    {
        cout<<"Danik";
    }
    else if(c==c1)
    {
        cout<<"Friendship";
    }
    return 0;
}


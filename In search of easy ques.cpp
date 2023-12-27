#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,arr[100],flag=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";

    }
}

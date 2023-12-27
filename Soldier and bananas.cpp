#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int k,n,w,sum=0,i;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum=sum+(k*i);
    }
    if(n>sum)
    {
        cout<<"0";
    }
    else
    {
      cout<<(sum-n);
    }
}


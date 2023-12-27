#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,h,arr[1000],count=0;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
        {
            count++;
        }
    }
    int sum=(count*2);
    int total=sum+(n-count);
    cout<<total;

}

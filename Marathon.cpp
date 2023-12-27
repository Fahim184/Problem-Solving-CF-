#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,i,t,arr[10];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int count=0;
        for(int j=0;j<4;j++)
        {
            cin>>arr[j];
        }
        for(int j=1;j<4;j++)
        {
            if(arr[j]>arr[0])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

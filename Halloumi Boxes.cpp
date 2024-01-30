#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,i,flag;
    long long arr[200];
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(k==1)
        {
            for(i=0;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,flag,n,k,arr[100];
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==k)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

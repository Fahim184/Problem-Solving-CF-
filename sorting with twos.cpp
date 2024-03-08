#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,arr[100];
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>=1 && arr[i]<arr[i-1])
            {
                if(i!=1 && i!=2 && i!=4 && i!=8 && i!=16)
                {
                    flag=1;
                }
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
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,arr[100],max,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        max=arr[0];
        for(i=0;i<n-1;i++)
        {
             sum=(arr[i+1]-arr[i]);
             if(sum>max)
             {
                max=sum;
             }
        }
        //cout<<max<<endl;
        if(max>((x-arr[n-1])*2))
        {
            cout<<max<<endl;
        }
        else
        {
            cout<<(x-arr[n-1])*2<<endl;
        }

    }

}
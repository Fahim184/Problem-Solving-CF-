#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,cnt,max,arr[100];
    cin>>t;
    while(t--)
    {
        cnt=0;
        max=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cnt++;
                if(cnt>max)
                {
                    max=cnt;
                }
            }
            else
            {
                cnt=0;
            }
        }
        cout<<max<<endl;
    }
}


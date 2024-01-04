#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[100];
    int n,flag,t,i,j;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            j=i+1;
            if(arr[i]<=j)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,div;
    long long mul;
    cin>>t;
    while(t--)
    {
        mul=1;
        div=1;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mul*=arr[i];
        }
        if(2023%mul!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            div=2023/mul;
            if(k>1)
            {
                cout<<"YES"<<endl;
                cout<<div<<" ";
                for(int j=1;j<=k-1;j++)
                {
                    cout<<"1"<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<div<<endl;
            }
        }

    }
}

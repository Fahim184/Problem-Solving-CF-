#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,x,j;
    cin>>t;
    while(t--)
    {
        int count=0;
        vector<int>v;
        cin>>n>>k;
        for(j=1; j<=n; j++)
        {
            v.push_back(j);
        }
        if(k==0)
        {
            sort(v.begin(),v.end(),[](int a,int b)
            {
                return a>b;
            });
            for(i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(k==(n-1))
        {
            sort(v.begin(),v.end());
            for(i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            sort(v.begin()+k,v.end(),[](int a,int b)
            {
                return a>b;
            });

            for(i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
}

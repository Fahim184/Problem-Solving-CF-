#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum=0,flag=0,count=0,x;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        
        if(v[i]<0)
        {
            count++;
            flag=1;
            if(count>m)
            {
                break;
            }
            else
            {
            sum+=(abs(v[i]));
            }
        }
        
       //cout<<v[i]<<" ";
    }
    if(flag==1)
    {
        cout<<sum<<endl;
    }
    else
    {cout<<"0"<<endl;}
}
#include<iostream>
using namespace std;
int main()
{
    int t,n,arr[100],i,flag,x,j;
    cin>>t;
    for(x=1; x<=t; x++)
    {
        flag=0;
        cin>>n;
        for(int k=0; k<n; k++)
        {
            cin>>arr[k];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
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
    return 0;
}

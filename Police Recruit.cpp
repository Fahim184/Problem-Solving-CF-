#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,arr[100050],count=0,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(sum<0)
        {
            count++;
            sum=0;
        }
    }
    cout<<count<<endl;

}
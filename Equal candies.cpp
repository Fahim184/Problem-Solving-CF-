#include<iostream>
using namespace std;
int main()
{
    int t,n,i,arr[50],j,min,sum;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        min=100000000;
        sum=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        for(i=0; i<n; i++)
        {
            sum+=(arr[i]-min);
        }
        cout<<sum<<endl;
    }

}

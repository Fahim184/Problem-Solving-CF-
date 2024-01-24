#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int i,j,n,count;
    string s;
    int arr[50]={0};
    count=0;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        int asci=s[i];
        arr[asci-64]++;
    }
    for(j=1;j<=26;j++)
    {
        if(arr[j]>=j)
        {
            count++;
        }
    }
    cout<<count<<endl;
    }
}
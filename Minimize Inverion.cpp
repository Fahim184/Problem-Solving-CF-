#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int arr[20050], brr[20050],farr[20050];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            farr[arr[i]]=brr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int j=1;j<=n;j++)
        {
            cout<<farr[j]<<" ";
        }
        cout<<endl;
 
        
    
    }
}
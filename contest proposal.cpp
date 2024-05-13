#include <bits/stdc++.h>
using namespace std;
void insert(long long arr[], long long size,long long pos)
{
    arr[size + 100];
    for (int i = (size - 1); i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        long long arr[150], brr[150];
        int flag = 0, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            if (arr[i] > brr[i])
            {
                count++;
                insert(arr,n,i);
                arr[i]=brr[i];
            }
        }
        cout<<count<<endl;
    }
}
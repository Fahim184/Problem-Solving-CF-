#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, arr[100050], j = 1, x = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (j <= k)
    {
        if (j == 1)
        {
            cout << arr[0] << endl;
            j++;
            x++;
        }
        else if(x>=n){
        cout<<"0"<<endl;
        j++;
        }
        else
        {
            if (arr[x] == arr[x - 1])
                x++;
            else
            {
                cout << arr[x] - arr[x - 1] << endl;
                x++;
                j++;
            }
        }
    }
}
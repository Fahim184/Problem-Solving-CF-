#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int arr[150], n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        sum = abs(arr[0] - arr[n - 1]) + abs(arr[0] - arr[n - 2]) +
              abs(arr[1] - arr[n - 1]) + abs(arr[1] - arr[n - 2]);
        cout << sum << endl;
    }
}
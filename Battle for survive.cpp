#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n + 100], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            sum += arr[i];
        }
        cout << (arr[n - 1] - (arr[n - 2] - sum)) << endl;
    }
}
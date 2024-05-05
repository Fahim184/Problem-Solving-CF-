#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int total = 0, arr[150], farr[150] = {0}, x = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            farr[arr[i]]++;
        }
        for (int j = 1; j <= 100; j++)
        {
            if (farr[j] >= 3)
            {
                total += (floor(farr[j]/3));
            }
        }
        cout << total << endl;
    }
}
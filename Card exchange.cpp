#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, arr[150];
    cin >> t;
    while (t--)
    {
        int count = 1;
        int flag = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            if (count >= k)
            {
                flag = 1;
                break;
            }
            else
                count = 1;
        }
        if (flag == 1)
            cout << k - 1 << endl;
        else
            cout << n << endl;
    }
}
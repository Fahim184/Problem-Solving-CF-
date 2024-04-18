#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        cin >> n;
        int v[50];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int j = 1; j <= n-1; j++)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (v[i] > v[i - 1] && v[i] > v[i + 1])
                {
                    int temp = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = temp;
                }
            }
            if (is_sorted(v, v + n))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
}
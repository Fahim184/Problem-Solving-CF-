#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, q, k;
    cin >> t;
    while (t--)
    {
        int a[150], n[150];
        cin >> k >> q;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> n[i];
            if (n[i] < a[0])
                cout << n[i] << " ";
            else
                cout << a[0] - 1 << " ";
        }
        cout << endl;
    }
}
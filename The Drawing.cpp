#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long sum = (4 * n) - 2;
        if (k == sum || k % 2 != 0)
            cout << (k / 2) + 1 << endl;
        else
            cout << k / 2 << endl;
    }
}
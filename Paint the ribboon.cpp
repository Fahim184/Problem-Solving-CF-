#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, t, per;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (n % m != 0)
            per = (n / m) + 1;
        else
            per = n / m;
        if (n - per <= k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
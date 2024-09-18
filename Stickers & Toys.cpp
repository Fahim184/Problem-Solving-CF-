#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T, n, s, t, res;
    cin >> T;
    while (T--)
    {
        cin >> n >> s >> t;
        if (s + t == n)
            cout << max(s,t) + 1 << endl;
        else
        {
            res = (t + s) - n;
            cout << (max(s,t)-res) + 1 << endl;
        }
    }
}
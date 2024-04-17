#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, sum, res1;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n >> a >> b;
        int res1 = (a * n);
        while (n != 0)
        {
            if (n >= 2)
            {
                sum += b;
                n -= 2;
            }
            else
            {
                sum += a;
                n--;
            }
        }
        if (sum < res1)
            cout << sum << endl;
        else
            cout << res1 << endl;
    }
}
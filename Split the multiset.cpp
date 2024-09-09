#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int dec = k - 1, count = 0;
        while (n > 1)
        {
            n -= dec;
            count++;
        }
        cout << count << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n <= k || n>k && (n-k==1))
            cout << "1" << endl;
        else
            cout << n << endl;
    }
}
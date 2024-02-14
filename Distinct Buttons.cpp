#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x[150], y[150];
    cin >> t;
    while (t--)
    {
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
            if (x[i] > 0)
                count1 = 1;
            else if (x[i] < 0)
                count2 = 1;
            if (y[i] > 0)
                count3 = 1;
            else if (y[i] < 0)
                count4 = 1;
        }

        if ((count1 + count2 + count3 + count4) < 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
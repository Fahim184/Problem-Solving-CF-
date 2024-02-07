#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, i, j, k;
    cin >> n;
    cin >> a;
    cin >> b;
    if (n == 1 && a == b)
    {
        cout << "1" << endl;
        cout << a << ":" << b << endl;
    }
    else if (n == 1 && a != b)
    {
        cout << "0" << endl;
        cout << a << ":" << b << endl;
    }
    else if (n == (a + b))
    {
        cout << "0" << endl;
        for (i = 1; i <= a; i++)
        {
            cout << "1"
                 << ":"
                 << "0" << endl;
        }
        for (j = 1; j <= b; j++)
        {
            cout << "0"
                 << ":"
                 << "1" << endl;
        }
    }
    else if (n < (a + b))
    {
        cout << "0" << endl;
        if (a > b)
        {
            for (i = 1; i <= n; i++)
            {
                if (i == n)
                {
                    cout << a << ":" << b << endl;
                }
                else if (b == 0)
                {
                    cout << "1"
                         << ":"
                         << "0" << endl;
                    a--;
                }
                else
                {
                    cout << "0"
                         << ":"
                         << "1" << endl;
                    b--;
                }
            }
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                if (i == n)
                {
                    cout << a << ":" << b << endl;
                }
                else if (a == 0)
                {
                    cout << "0"
                         << ":"
                         << "1" << endl;
                    b--;
                }
                else
                {
                    cout << "1"
                         << ":"
                         << "0" << endl;
                    a--;
                }
            }
        }
    }
        else if (n > (a + b))
        {
            cout << n - (a + b) << endl;
            for (i = 1; i <= a; i++)
            {
                cout << "1"
                     << ":"
                     << "0" << endl;
            }
            for (j = 1; j <= b; j++)
            {
                cout << "0"
                     << ":"
                     << "1" << endl;
            }
            for (k = 1; k <= (n - (a + b)); k++)
            {
                cout << "0"
                     << ":"
                     << "0" << endl;
            }
        }
    }
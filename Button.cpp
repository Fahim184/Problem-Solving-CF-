#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (c % 2 == 0)
        {
            long long B_Anna = (c / 2) + a;
            if (B_Anna <= ((a + b + c) - B_Anna))
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
        else
        {
            long long B_Anna = (c / 2 + 1) + a;
            if (B_Anna <= ((a + b + c) - B_Anna))
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
    }
}
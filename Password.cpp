#include <bits/stdc++.h>
#define cint cin >> t;
#define cinn cin >> n;
#define fori for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int t, n, arr[50],sum;
    cint;
    while(t--)
    {
        sum = 0;
        cinn;
        fori
        {
            cin >> arr[i];
        }
        for (int j = 1; j < (10 - n); j++)
        {
            sum += 6 * j;
        }
        cout << sum << endl;
    }
}
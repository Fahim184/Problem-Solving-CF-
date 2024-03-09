#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        long long y=1;
        cin >> n;
        vector<long long int> v;
        for (i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        for (i = 0; i < n;i++,y++)
        {
            if (y==v[i])
            {
                y++;
            }
        }
        cout<<y-1<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        sort(v.rbegin(),v.rend());
        sort(v.begin()+(n-m),v.end());
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << endl;
    }
}
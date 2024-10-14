#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define cint cin >> t
#define whl while (t--)
#define vi vector<int>
#define vll vector<ll>
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (int i = 0; i < (n); i++)
#define for1(n) for (int i = 1; i < (n); i++)
#define fore1(n) for (int i = 1; i < (n); i++)
#define optimize()
#define ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    whl
    {
        ll n, cnt = 0,sum=0;
        cin >> n;
        vector<ll> v(n);
        for0(n)
        {
            cin >> v[i];
            if(v[i]!=1)
            sum+=(v[i]-1);
            if (v[i] == 1)
                cnt++;
        }
        // ll size = unique(v.begin(), v.end()) - v.begin();
        if (n == 1)
            cout << "NO" << endl;
        else if (cnt == 0)
            cout << "YES" << endl;
        else
        {
            if (sum >= cnt)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

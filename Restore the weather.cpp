/* In the name of Allah, Most Gracious, Most Merciful*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define cint cin >> t
#define whl while (t--)
#define vi vector<int>
#define vll vector<ll>
#define ascii(n) static_cast<int>(n);
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (int i = 0; i < (n); i++)
#define for1(n) for (int i = 1; i < (n); i++)
#define fore1(n) for (int i = 1; i <= (n); i++)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first > p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second < p2.second);
    else
        return 0;
    // Or *(-1) with p.first
}
// for (auto &u : s)
// {
//     u = tolower(static_cast<unsigned char>(u));
// }

void Ahlan_Wa_Sahlan()
{
    optimize();
    ll t, n, k;
    cin >> t;
    whl
    {
        cin >> n >> k;
        vector<ll> v1(n);
        vector<ll> v2(n);
        vector<pair<ll, ll>> v_p(n);
        for0(n)
        {
            cin >> v1[i];
            v_p[i].first = v1[i];
            v_p[i].second = i;
        }
        for0(n)
        {
            cin >> v2[i];
        }
        sort(v_p.begin(), v_p.end());
        sort(v2.begin(), v2.end());
        map<ll,ll>m;
        for0(n){
            m[v_p[i].second]=v2[i];
        }
        for(auto u:m)cout<<u.second<<" ";
        cout<<endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

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
    int n;
    cin >> n;
    vector<ll> v(n);
    ll cnt = 1, maxx = 0;
    for0(n)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            if (i == n - 2 && v[i] <= v[i + 1])
            {
                cnt++;
                maxx = max(cnt, maxx);
            }
            else if (i == n - 2)
            {
                maxx = max(maxx, cnt);
            }
            else
                cnt++;
        }
        else
        {
            maxx = max(cnt, maxx);
            cnt = 1;
        }
    }
    if (n == 1)
        maxx = 1;
    cout << maxx << endl;
}
int main()
{
    Ahlan_Wa_Sahlan();
}

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
#define fore1(n) for (int i = 1; i <= (n); i++)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

void Ahlan_Wa_Sahlan()
{
    optimize();
    /// int t;
    //  cin>>t;
    // whl{
    int n, sum_v = 0, sum = 0, cnt = 1;
    cin >> n;
    vi v(n);
    for0(n)
    {
        cin >> v[i];
        sum_v += v[i];
    }
    sort(v.rbegin(), v.rend());
    sum = v[0];
    for0(n)
    {
        if (sum > (sum_v - sum))
            break;
        else
        {
            sum += v[i + 1];
            cnt++;
        }
    }
    cout << cnt << endl;
    //}
}
int main()
{
    Ahlan_Wa_Sahlan();
}

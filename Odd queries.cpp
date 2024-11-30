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
// map complexity log2(n)

void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    whl
    {
        ll n, q, sum_vec = 0, sum, sum1, sum3, sum2 = 0, l, r, k;
        cin >> n >> q;
        vector<ll> v(n);
        for0(n)
        {
            cin >> v[i];
            sum_vec += v[i];
        }
        
        for (int j = 1; j <= q; j++)
        {
            cin >> l >> r >> k;
            sum1 = 0, sum2 = 0, sum = 0, sum3 = sum_vec;
            if (l == r)
            {
                sum3 -= v[l - 1];
                sum3 += ((r - l + 1) * k);
                if (sum3 & 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                for (int i = 0; i < l - 1; i++)
                {
                    sum1 += v[i];
                }
                for (int j = r; j < n; j++)
                {
                    sum2 += v[j];
                }
                sum += (((r - l) + 1) * k) + sum1 + sum2;

                if (sum & 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

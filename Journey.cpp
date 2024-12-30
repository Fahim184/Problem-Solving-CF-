/* In the name of Allah, Most Gracious, Most Merciful*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define cint cin >> t
#define whl while (t--)
#define vi vector<int>
#define vll vector<ll>
#define Y "YES"
#define N "NO"
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
    ll t, n, a, b, c, sum;
    cin >> t;
    whl
    {
        cin >> n >> a >> b >> c;
        ll summation = a + b + c;
        ll div = n / summation;
        ll mod = n % summation;
        sum = div * 3;
        ll sum2 = 0, i = 1, count = 0;
        while (sum2 < mod)
        {
            if (i == 1)
            {
                sum2 += a;
                count++;
                i++;
            }

            else if (i == 2)
            {
                sum2 += b;
                count++;
                i++;
            }

            else if (i == 3)
            {
                sum2 += c;
                count++;
                i = 1;
            }
        }
        sum += count;
        cout << sum << endl;
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}

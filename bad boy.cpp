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
    int t;
    cin >> t;
    whl
    {
        ll n, m, x, y, p1, p2, res1, res2, maxx = 0;
        cin >> n >> m >> x >> y;
        if (x == 1 && y == 1)
            cout << n << " " << m << " " << n << " " << m << endl;
        else if (x == 1 && y == m)
            cout << n << " " << "1" << " " << n << " " << "1" << endl;
        else if (x == n && y == 1)
            cout << "1" << " " << m << " " << "1" << " " << m << endl;
        else if (x == n && y == m)
            cout << "1" << " " << "1" << " " << "1" << " " << "1" << endl;
        else
        {
            res1 = (x - 1) + (y - 1) + (abs(x - n) + abs(y - m));
            res2 = ((x - 1) + abs(y - m)) + (abs(x - n) + (y - 1));
            if (res1 > res2)
                cout << "1" << " " << "1" << " " << n << " " << m << endl;
            else
                cout << "1" << " " << m << " " << n << " " << "1" << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

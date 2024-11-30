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
        int a, n, b, divide;
        cin >> n >> a >> b;
        divide = n / 2;
        if (a > b)
        {
            if (n - a + 1 != divide || b - 1 + 1 != divide)
                cout << "-1" << endl;
            else
            {
                for (int i = a; i <= n; i++)
                    cout << i << " ";
                for (int j = b; j >= 1; j--)
                    cout << j << " ";
                cout << endl;
            }
        }
        else
        {
            int farr[n + 100] = {0}, cnt = 1, cnt_a = 0, cnt_b = 0;
            farr[b] = 1;
            for (int i = 1; 1 < b; i++)
            {
                if (cnt == divide)
                    break;
                else if (i != a)
                {
                    cnt++;
                    farr[i] = 1;
                }
            }
            cnt = 1;
            farr[a] = 2;
            for (int k = n; k > a; k--)
            {
                if (cnt == divide)
                    break;
                else if (k != b)
                {
                    cnt++;
                    farr[k] = 2;
                }
            }
            for (auto u : farr)
            {
                if (u == 2)
                    cnt_a++;
                else if (u == 1)
                    cnt_b++;
            }
            if (cnt_a == cnt_b)
            {
                for (int x = 1; x <= n; x++)
                {
                    if (farr[x] == 2)
                        cout << x << " ";
                }
                for (int x = 1; x <= n; x++)
                {
                    if (farr[x] == 1)
                        cout << x << " ";
                }
                cout << endl;
            }
            else
                cout << "-1" << endl;
        }
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}

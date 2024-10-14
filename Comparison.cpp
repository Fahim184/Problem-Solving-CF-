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
    int t;
    cin >> t;
    whl
    {
        int n, cnt = 1, maxx = 1;
        cin >> n;
        string s;
        cin >> s;
        for1(n)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
                if (i == (n - 1) && cnt > maxx)
                {
                    maxx = cnt;
                }
            }
            else
            {
                if (cnt > maxx)
                {
                    maxx = cnt;
                    cnt = 1;
                }
                else
                    cnt = 1;
            }
        }
        cout << maxx + 1 << endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

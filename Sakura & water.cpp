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
        int n, minn, sum = 0;
        cin >> n;
        int arr[n + 100][n + 100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int k = n; k >= 1; k--)
        {
            minn = 0;
            for (int j = 1, i = k; j <= (n - k + 1); j++,i++)
            {
                minn = min(minn, arr[i-1][j-1]);
            }
            sum += (-1*minn);
        }
        for (int k = 2; k <= n; k++)
        {
            minn = 0;
            for (int j = k, i = 1; i <= (n - k + 1); i++,j++)
            {
                minn = min(minn, arr[i-1][j-1]);
            }
            sum += (abs(minn));
        }
        cout<<sum<<endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

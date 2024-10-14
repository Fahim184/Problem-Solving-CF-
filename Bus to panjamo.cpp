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
    else if(p1.first==p2.first)return(p1.second<p2.second);
    else return 0;
// Or *(-1) with p.first
}
//map complexity log2(n)

void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        int n, r, t_pas = 0, n_sit = 0, h_pas = 0, left_sit = 0, left_pas = 0;
        cin >> n >> r;
        vector<int> v(n);
        for0(n)
        {
            cin >> v[i];
            t_pas += v[i];
        }
        n_sit = r * 2;
        if (n_sit == t_pas)
        {
            for0(n)
            {
                if (v[i] >= 2)
                {
                    h_pas += (v[i] / 2);
                }
            }
            h_pas *= 2;
            cout << h_pas << endl;
        }
        else
        {
            for0(n)
            {
                if (v[i] >= 2)
                {
                    h_pas += (v[i] / 2);
                }
            }
            h_pas*=2;
            left_sit = (n_sit - h_pas);
            left_pas = (t_pas - h_pas);
            if ((left_pas*2) <= left_sit)
            {
                h_pas += (left_pas);
                cout << h_pas << endl;
            }
            else
            {
                h_pas += (left_sit - left_pas);
                cout << h_pas << endl;
            }
        }
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}

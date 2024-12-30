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
        string s, s2;
        int flag = 0;
        cin >> s;
        s2 = s;
        sort(s.begin(), s.end());
        int sz = unique(s.begin(), s.end()) - s.begin();
        if (sz == 1)
            cout << "-1" << endl;
        else
        {
            int s_size = s2.size();
            for (int i = 0, j = s_size - 1; i < s_size / 2; i++)
            {
                // cout<<i<<" "<<j<<endl;
                // cout<<s2[i]<<" "<<s2[j]<<endl;
                if (s2[i] != s2[j])
                {
                    flag = 1;
                    break;
                }
                j--;
            }
            if (flag == 1)
                cout << s2 << endl;
            else
            {
                for (int i = 0, j = i + 1; i < s_size - 2;)
                {
                    // cout << s2[i] << " " << s2[j] << endl;
                    if (s2[i] != s2[j])
                    {
                        swap(s2[i], s2[j]);
                        break;
                    }
                    else
                    {
                        i++;
                        j++;
                    }
                }
                cout << s2 << endl;
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}

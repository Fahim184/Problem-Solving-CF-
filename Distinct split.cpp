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

void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    whl
    {
        int n, cnt = 0, cnt2 = 0, sum = 0, maxx = 0;
        string s;
        vector<int> v1;
        vector<int> v2;
        map<char, int> m;
        map<char, int> m2;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (m[s[i]] == 0)
            {
                cnt++;
            }
            m[s[i]]++;
            v1.push_back(cnt);
        }
        for (int i = n - 1; i >= 1; i--)
        {
            if (m2[s[i]] == 0)
            {
                cnt2++;
            }
            m2[s[i]]++;
            v2.push_back(cnt2);
        }
        // for(auto u:v1)cout<<u<<" ";
        // cout<<endl;
        // for(auto u:v2)cout<<u<<" ";
        // cout<<endl;
        for (int i = 0,j = n - 2;i < n-1; i++)
        {
            sum = v1[i] + v2[j];
            maxx = max(maxx, sum);
            j--;
        }
        cout << maxx << endl;

    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}

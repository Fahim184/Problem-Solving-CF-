#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, flag = 0;
        string s, s1;
        cin >> n;
        cin >> s;
        reverse(s.begin(), s.end());
        s1 = s;
        reverse(s.begin(), s.end());
        if (s[0] < s[s.size() - 1])
            cout << s << endl;
        else if (s[0] > s[s.size() - 1])
            cout << s1 << s << endl;
        else
        {
            if (s <= s1)
                cout << s << endl;
            else
                cout << s1 << s << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int flag = 0;
        cin >> s;
        if (s.length() == 2)
        {
            if (s == "))" || s == "((")
            {
                cout << "YES" << endl;
                cout << "()()" << endl;
            }
            else if (s == "()")
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                cout << "(())" << endl;
            }
        }
        else
        {
            for (int i = 2; i < s.length(); i++)
            {
                if (s[i] != s[i - 2] || s[i] == s[i - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
                for (int i = 0; i < 2 * s.length(); i++)
                {
                    if (i % 2 == 0)
                        cout << "(";
                    else
                        cout << ")";
                }
                cout << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 1; i <= 2 * s.length(); i++)
                {
                    if (i <= s.length())
                        cout << "(";
                    else
                        cout << ")";
                }
                cout << endl;
            }
        }
    }
}

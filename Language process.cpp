#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n;)
        {
            if (s[i] == 'a' || s[i] == 'e')
            {
                if ((i == (n - 1) && (s[i] == 'a' || s[i] == 'e')) || s[i + 2] == 'a' || s[i + 2] == 'e')
                {
                    if (i == n - 1)
                        cout << s[i - 1] << s[i];
                    else
                        cout << s[i - 1] << s[i] << ".";
                    i += 2;
                }
                else
                {
                    if ((i + 1) == n - 1)
                        cout << s[i - 1] << s[i] << s[i + 1];
                    else
                        cout << s[i - 1] << s[i] << s[i + 1] << ".";
                    i++;
                }
            }
            else
                i++;
        }
        cout << endl;
    }
}
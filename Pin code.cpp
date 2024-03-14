#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0 && s[i] == '1')
            {
                sum = 1;
                continue;
            }
            else if (i == 0 && s[i] == '0')
            {
                sum = 10;
                continue;
            }
            else if (i == 0 && s[i] != '1')
            {
                sum = s[i] - '0';
                continue;
            }

            if (i > 0 && s[i] != s[i - 1])
            {
                if (s[i] != '0' && s[i - 1] != '0')
                    sum += abs(((s[i] - '0') - (s[i - 1] - '0'))) + 1;
                else if (s[i] != '0' && s[i - 1] == '0')
                    sum += abs(((s[i] - '0') - 10)) + 1;
                else
                    sum += ((10 - (s[i - 1] - '0')) + 1);
            }
            else if (i > 0 && s[i] == s[i - 1])
                sum += 1;
        }
        cout << sum << endl;
    }
}
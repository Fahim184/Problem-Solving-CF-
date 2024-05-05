#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0, flag = 0, flag_1 = 0;
        cin >> n;
        string s;
        cin >> s;
        if (s == "11")
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                    flag_1 = 1;
                if (s[i] == '1')
                {
                    count++;
                    flag = 1;
                }
            }
            if (s[n - 1] == '1')
            {
                count++;
                flag = 1;
            }
            if ((n > 2 && flag_1 == 1) && count == 2)
                cout << "NO" << endl;
            else if (flag == 0 || (flag == 1 && count % 2 == 0))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
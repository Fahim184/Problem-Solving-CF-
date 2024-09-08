#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int flag = 0, count1 = 0, count2 = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && flag == 0)
            {
                count1++;
                flag = 1;
            }
            else if (s[i] == '1' && flag == 0)
                count2++;
            else if (s[i] == '1' && flag == 1)
            {
                count2++;
                flag = 0;
            }
        }
        if (count2 > count1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
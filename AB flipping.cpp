#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        int count = 0, sub_count = 0, flag = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                count++;
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                if (flag == 1)
                {
                    count += (sub_count);
                    sub_count = 0;
                    flag = 0;
                }
            }
            else if (s[i] == 'A' && s[i+1] == 'A')
            {
                flag = 1;
                sub_count++;
            }
        }
        cout << count << endl;
    }
}
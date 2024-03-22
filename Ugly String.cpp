#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        int count = 0;
        int n;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n - 2;)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' &&
             s[i + 4] == 'e')
            {
                count++;
                i += 5;
            }
            else if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
                     (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e'))
            {
                count++;
                i+=3;
            }
            else
            i++;
        }

        cout << count << endl;
    }
}
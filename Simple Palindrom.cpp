#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s2, s = "aeiou";
        for (int i = 1, j = 0; i <= n; i++)
        {
            s2 += s[j];
            j++;
            if (j > 4)
                j = 0;
        }
        sort(s2.begin(),s2.end());
        cout<<s2<<endl;
    }
}
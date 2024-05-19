#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while (t--)
    {
        int arr[100], flag = 0;
        string s;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j] && s[i] != s[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

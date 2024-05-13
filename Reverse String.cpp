#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0, j = 2; i < n; i++)
    {
        if (n % j == 0)
        {
            reverse(s.begin(), s.begin() + j);
            j++;
        }
        else
            j++;
    }
    cout<<s<<endl;
}
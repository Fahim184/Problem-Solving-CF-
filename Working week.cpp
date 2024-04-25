#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int ans, l1, l2, l3, w_days = n - 3, off_day1, off_day2, ans2;
        off_day1 = (w_days / 3);
        off_day2 = off_day1 + (off_day1 + 1);
        l1 = off_day1 - 1;
        l2 = (off_day2 - off_day1) - 1;
        l3 = (n - off_day1) - 1;
        ans = min(l1, l2);
        ans2 = min(ans, l3);
        cout << ans2 << endl;
    }
}
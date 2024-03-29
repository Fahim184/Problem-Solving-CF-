#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long arr[100050], median2, count = 1,median;
        if (n % 2 == 0)
            {median = n / 2;
            median-=1;}
        else
            {median = (n / 2) + 1;
            median-=1;}
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        median2 = arr[median] + 1;
        for (int j = median+1; j < n; j++)
        {
            if (median2 > arr[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
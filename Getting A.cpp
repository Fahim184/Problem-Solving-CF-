#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[120];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += (arr[i]);
    }
    double res = (double)sum / n;
    if (round(res) >= 5)
        cout << "0" << endl;
    else
    {
        sort(arr, arr + n);
        {
            for (int i = 0, j = 1; i < n; i++)
            {
                sum += (5 - arr[i]);
                double res2 = (double)sum / n;
                if (round(res2) >= 5)
                {
                    cout << j << endl;
                    break;
                }
                else
                    j++;
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, arr[100], i;
    cin >> t;
    while (t--)
    {
        int n, index, flag = 0, index2, count = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (flag == 0 && arr[i] == 1)
            {
                flag = 1;
                index = i;
            }
        }
        for (int j = (n - 1); j >= 0; j--)
        {
            if (arr[j] == 1)
            {
                index2 = j;
                break;
            }
        }
        for (int i = index; i <= index2; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
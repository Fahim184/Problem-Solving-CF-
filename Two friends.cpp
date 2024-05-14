#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, arr[100];
    cin >> t;
    while (t--)
    {
        int farr[100]={0};
        int flag = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            farr[i+1]=arr[i];
        }
        for (int j = 1; j <= n; j++)
        {
            if (farr[farr[j]] == j)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
}
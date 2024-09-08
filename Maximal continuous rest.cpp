#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0, count = 0, maxx = 0;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j <= 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                count++;
            else
            {
                maxx = max(maxx,count);
                count = 0;
            }
        }
    }
    cout<<maxx<<endl;
}
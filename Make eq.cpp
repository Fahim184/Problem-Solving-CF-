#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[150], b[150], n, c_a_1 = 0, c_a_0 = 0, c_b_1 = 0, c_b_0 = 0, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                c_a_1++;
            else
                c_a_0++;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
            if (b[j] == 1)
                c_b_1++;
            else
                c_b_0++;
            if (b[j] != a[j])
                count++;
        }
        int sub = abs(c_a_1 - c_b_1);

        if (count == 0)
            cout<< "0" << endl;
        else if (c_a_1 == c_b_1 || c_a_0 == c_b_0 || count == 1)
            cout << "1" << endl;
        else
        {
            if (count == sub)
                cout << sub << endl;
            else 
            cout<<1+sub<<endl;
        }
    }
}
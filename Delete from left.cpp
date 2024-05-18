#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int t_length = (s1.length() + s2.length()), count = 0;
    if (s1.length() > s2.length())
    {

        for (int i = s2.length() - 1, j = s1.length() - 1; i >= 0; i--)
        {

            if (s2[i] != s1[j])
                break;
            else
            {
                count++;
                j--;
            }
        }
    }
    else
    {
        for (int i = s1.length() - 1, j = s2.length() - 1; i >= 0; i--)
        {
            if (s1[i] != s2[j])
                break;
            else
            {
                count++;
                j--;
            }
        }
    }

    if (count == 0)
        cout << t_length << endl;
    else
        cout << (t_length - (count * 2)) << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define cint cin >> t
#define whl while (t--)
#define vi vector<int>
#define vll vector<ll>
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (int i = 0; i < (n); i++)
#define for1(n) for (int i = 1; i < (n); i++)
#define fore1(n) for (int i = 1; i < (n); i++)

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Ahlan_Wa_Sahlan()
{
    int t, n;
    cint;
    whl
    {
        int cnt = 1, flag = 0;
        cin >> n;
        ll arr[10050];
        for0(n)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                flag = 1;
        }
        if (flag == 1)
        {
            for0(n)
            {
                if (arr[i] == 1)
                {
                    arr[i] += 1;
                }
            }
        }
        fore1(n)
        {
            if (arr[i] % arr[i - 1] == 0)
                arr[i] += 1;
        }
        for0(n)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
    int main()
    {
        Ahlan_Wa_Sahlan();
    }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (int i = 0; i < (n); i++)
#define fore0(n) for (int i = 0; i <= (n); i++)
#define for1(n) for (int i = 1; i <= (n); i++)

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
void display()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[200050], farr[200050] = {0}, sum = 0;
        cin >> n;
        for0(n)
        {
            cin >> arr[i];
            farr[arr[i]]++;
        }
        if (((n & 1) && farr[0] <= (n / 2) + 1) || farr[0] <= (n / 2) || farr[0] == 0)
        {
            cout << "0" << endl;
        }
        else if (farr[1] == 0 || (farr[0] + farr[1]) < n)
        {
            cout << "1" << endl;
        }
        else
            cout << "2" << endl;
    }
}

int main()
{
    display();
}
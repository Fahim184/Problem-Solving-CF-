#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (int i = 0; i < (n); i++)
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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << "1" << endl;
        else if (n & 1)
            cout << "-1" << endl;
        else
        {
            for (int i = 2; i <= n; i += 2)
            {
                cout << i <<" "<< i - 1 << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    display();
}

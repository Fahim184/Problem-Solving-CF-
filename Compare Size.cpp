#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (
         x[x.size()-1]=='L' && y[y.size()-1]=='S' ||
         x[x.size()-1]=='L' && y[y.size()-1]=='M' ||
         x[x.size()-1]=='M' && y[y.size()-1]=='S'||
         x[x.size()-1]=='L' && y[y.size()-1]=='L' && x>y ||
         x[x.size()-1]=='S' && y[y.size()-1]=='S' && x<y
        )
            cout << ">" << endl;
        else if (x==y)
            cout << "=" << endl;
        else
             cout<< "<" << endl;
    }
}
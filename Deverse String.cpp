#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            flag=1;
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1]<<endl;
            break;
        }
    }
    if(flag==0)
    cout<<"NO"<<endl;
}
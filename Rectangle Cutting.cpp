#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==1  && b==1  || a%2!=0 && b%2!=0 || (a%2!=0 && 
        (a==b*2 || b==a*2)) || (b%2!=0 && (a==b*2 || b==a*2))
        )
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
}
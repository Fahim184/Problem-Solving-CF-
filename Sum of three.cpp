#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1&&n<=6 || n==9)
        {
            cout<<"NO"<<endl;
        }
        else if(n==12)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<"4"<<" "<<"7"<<endl;
        }
        else if(n%3==0)
        {
            cout<<"YES"<<endl;
            cout<<"2"<<" "<<"5"<<" "<<(n-7)<<endl;
        }
         else if(n%3!=0)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<"2"<<" "<<(n-3)<<endl;
        }
    }
}

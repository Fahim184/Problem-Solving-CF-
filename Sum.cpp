#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a+b==c || a+c == b || b+c==a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

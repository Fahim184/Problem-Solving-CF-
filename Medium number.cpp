#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b,c,x;
    cin>>t;
    for(x=1;x<=t;x++)
    {
        cin>>a>>b>>c;
        if(a>b && b>c || c>b && b>a)
        {
            cout<<b<<endl;
        }
        else if(b>a && a>c || c>a && a>b)
        {
            cout<<a<<endl;
        }
        else if(a>c && c>b || b>c && c>a)
        {
            cout<<c<<endl;
        }
    }

}

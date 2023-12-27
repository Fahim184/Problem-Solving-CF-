#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,k,i,value_x;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        if(x%k!=0)
        {
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else
        {
            value_x=x;
            for(i=1;;i++)
            {
                value_x--;
                if(value_x%k!=0 && i%k!=0 && (value_x+i)==x)
                {
                    cout<<"2"<<endl;
                    cout<<value_x<<" "<<i<<endl;
                    break;
                }
            }
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,cnt1,cnt2;
   long long num;
  // long long mul,num;
    cin>>t;
    while(t--)
    {
        cnt1=0;
        cnt2=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>num;
            if(num<0)
            {
                cnt1++;
            }
            if(num==0)
            {
                cnt2=1;
            }
        }
        if(cnt2==1)
        {
            cout<<"0"<<endl;
        }
        else if(cnt1%2!=0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
    }
}

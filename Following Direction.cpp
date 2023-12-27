#include<iostream>
using namespace std;
int main()
{
    int t,i,x,n,cnt1,cnt2,flag;
    char arr[60];
    cin>>t;
    while(t--)
    {
        cnt1=0;
        cnt2=0;
        flag=0;
        cin>>n;
        cin>>arr;
        for(i=0;i<n;i++)
        {
            if(arr[i]=='R')
            {
                cnt1++;
            }
            if(arr[i]=='L')
            {
                cnt1--;
            }
            if(arr[i]=='U')
            {
                cnt2++;
            }
            if(arr[i]=='D')
            {
                cnt2--;
            }
            if(cnt1==1 && cnt2==1)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

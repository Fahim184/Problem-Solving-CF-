
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,count,flag;
    cin>>t;
    while(t--)
    {
        string s;
        flag=0;
        count=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='#')
            {
                count++;
            }
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"2"<<endl;
        }
        else
        {
            if(s[n-1]=='#')
            {
                count+=1;
            }
            cout<<(n-count)<<endl;
        }
    }
}

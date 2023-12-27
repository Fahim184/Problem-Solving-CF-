#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,cnt_T,cnt_i,cnt_m,cnt_u,cnt_r;
    char s[15];
    cin>>t;
    while(t--)
    {
        scanf("%d ",&n);
        gets(s);
        if(n==5)
        {
                cnt_T=0;
                cnt_i=0;
                cnt_m=0;
                cnt_u=0;
                cnt_r=0;
            for(i=0;i<n;i++)
            {
               if(s[i]== 'T')
               {
                   cnt_T++;

               }
               else if(s[i] == 'i' )
               {
                   cnt_i++;
               }
                  else if(s[i] == 'm' )
               {
                   cnt_m++;
               }
                 else if(s[i] == 'u' )
               {
                   cnt_u++;
               }
                else if(s[i] == 'r' )
               {
                   cnt_r++;
               }
            }
            if(cnt_T==1&& cnt_i==1&&cnt_m==1&&cnt_u==1&&cnt_r==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }

        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

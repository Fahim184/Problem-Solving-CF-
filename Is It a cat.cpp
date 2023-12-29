#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,l,flag,falsee;
    char s[70];
    cin>>t;
    while(t--)
    {
        flag=0;
        falsee=1;
        scanf("%d ",&n);
        gets(s);
        int cnt_m=0;
        int cnt_e=0;
        int cnt_o=0;
        int cnt_w=0;
        if(s[0]=='m'||s[0]=='M')
        {
            cnt_m=1;
            for(i=1; i<n; i++)
            {
                if(s[i]!='m'&&s[i]!='M'&&s[i]!='e'&&s[i]!='E')
                {
                    falsee=0;
                    break;
                }
                else if(s[i]=='m' || s[i]=='M')
                {
                    continue;
                }
                else if(s[i]=='e'||s[i]=='E')
                {
                    cnt_e=1;
                    for(i=i+1; i<n; i++)
                    {
                        if(s[i]!='e'&&s[i]!='E'&&s[i]!='o'&&s[i]!='O')
                        {
                            flag=1;
                            falsee=0;
                            break;
                        }
                        else if(s[i]=='e' || s[i]=='E')
                        {
                            continue;
                        }
                        else if(s[i]='o'||s[i]=='O')
                        {
                            cnt_o=1;
                            for(i=i+1; i<n; i++)
                            {
                                if(s[i]!='o'&&s[i]!='O'&&s[i]!='w'&&s[i]!='W')
                                {
                                    flag=1;
                                    falsee=0;
                                    break;
                                }
                                else if(s[i]=='o' || s[i]=='O')
                                {
                                    continue;
                                }
                                else if(s[i]=='w'|| s[i]=='W')
                                {
                                    cnt_w=1;
                                    for(i=i+1; i<n; i++)
                                    {
                                        if(s[i]!='w' && s[i]!='W')
                                        {
                                            flag=1;
                                            falsee=0;
                                            break;
                                        }
                                        else if(s[i]=='w' || s[i]=='W')
                                        {
                                            continue;
                                        }
                                    }
                                }
                                if(flag==1)
                                {
                                    break;
                                }
                            }
                        }
                        if(flag=1)
                        {
                            break;
                        }
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
        }
        else
        {
            falsee=0;
        }
       //cout<<falsee<<endl<<cnt_m<<endl<<cnt_e<<endl<<cnt_o<<endl<<nt_w<<endl;
        if(falsee==1 && (cnt_e==1&&cnt_m==1&&cnt_o==1&&cnt_w==1))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}


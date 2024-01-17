#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s,s1,s2;
    int t,count,index1,index2;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        count=1;
        cin>>s;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]!='0')
            {
                index1=i-1;
                index2=i;
                break;
            }
            else
            {
                count++;
            }

        }
        if(count==s.size())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int j=0; j<=index1; j++)
            {
                s1+=s[j];
            }
            for(int k=index2; k<s.size(); k++)
            {
                s2+=s[k];
            }
            if(stoi(s1)<stoi(s2) )
            {
                cout<<s1<<" "<<s2<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }

}

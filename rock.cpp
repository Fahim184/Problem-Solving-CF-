#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10],x;
    int n;
    scanf("%d ",&n);
    while(n--)
    {
        gets(s);
        for(int i=1,j=97; i<=8; i++,j++)
        {
            x=j;
            if(x!=s[0] && j<=104)
            {
                cout<<x<<s[1]<<endl;
            }
            if(i!=(s[1]-'0'))
            {
                cout<<s[0]<<i<<endl;
            }
        }

    }
}



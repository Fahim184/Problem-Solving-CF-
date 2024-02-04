#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,k;
    char s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1,j=1;i<=(n*k);i++)
        {
            if(j==k)
            {
                s=96+j;
                cout<<s;
                j=1;
            }
            else
            {
                s=96+j;
                cout<<s;
                j++;
            }
        }
        cout<<endl;
    }
}
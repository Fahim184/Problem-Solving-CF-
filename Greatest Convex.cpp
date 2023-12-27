#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,sum,k,mul=1,j;
    int flag=0;
    cin>>t;
    while(t--)
    {
        cin>>k;

        for( j=(k-1),i=j-1; i>=1; i--)
        {
            if(j==0)
            {
                break;
            }
            mul*=i;
            if(i==1)
            {
                sum=(mul+(mul*j));
                if(sum%k==0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    j--;
                }
            }
        }
        if(flag==1)
        {
            cout<<j<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        if(x%10!=0)
        {
            x=x-1;
        }
        else if(x%10==0)
        {
            x=x/10;
        }
    }
    cout<<x;

}



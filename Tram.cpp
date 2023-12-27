#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    int n,a,b,max=0,in=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
       int still_in=((in-a)+b);
        if(still_in>max)
        {
            max=still_in;
        }
        in=still_in;
    }
    cout<<max;
    return 0;
}



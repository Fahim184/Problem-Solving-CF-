#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,price,quality,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>price>>quality;
        if(price!=quality)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }

}

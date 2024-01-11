#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int sub,count=0;
    cin>>n;
    while(1)
    {
        if(n==0)
        {
            break;
        }
        else if(n>=100)
        {
            sub=n-100;
            n=sub;
            count++;
        }
        else if(n>=20)
        {
            sub=n-20;
            n=sub;
            count++;
        }
        else if(n>=10)
        {
            sub=n-10;
            n=sub;
            count++;
        }
        else if(n>=5)
        {
            sub=n-5;
            n=sub;
            count++;
        }
        else if(n>=1)
        {
            sub=n-1;
            n=sub;
            count++;
        }
    }
    cout<<count<<endl;


}

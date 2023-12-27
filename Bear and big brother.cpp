#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,i,count=0;
    cin>>a>>b;
    for(i=1;;i++)
    {
        count++;
        a=a*3;
        b=b*2;
        if(a>b)
        {
            break;
        }
    }
    cout<<count;

}


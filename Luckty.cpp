#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,sum1,sum2;
    char arr[10];
    cin>>t;
    while(t--)
    {
        sum1=0;
        sum2=0;
        cin>>arr;
        int length=strlen(arr);
        for(i=0,j=(length-1);i<3;i++,j--)
        {
             sum1+=(arr[i]-'0');
             sum2+=(arr[j]-'0');
        }
        cout<<sum1<<endl;
        cout<<sum2<<endl;
        if(sum1==sum2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

}

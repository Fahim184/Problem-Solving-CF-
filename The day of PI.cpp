#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[50];
    char brr[50]="314159265358979323846264338327";
    int n,i,t,length,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>arr;
        length=strlen(arr);
        for(i=0;i<length;i++)
        {
            if(arr[i]!=brr[i])
            {
                break;
            }
            else
            {
                count++;
            }
        }
        cout<<count<<endl;


    }
}

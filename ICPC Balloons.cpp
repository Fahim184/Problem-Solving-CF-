#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[70];
    int t,i,j,length,l;
    cin>>t;
    while(t--)
    {
        int total_balloon;
        int count=0;
        cin>>l;
        cin>>arr;
        length=strlen(arr);
        for(i=0; i<length-1; i++)
        {
            for(j=i+1;j<length;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    break;
                }
            }

        }
        total_balloon=((length-count)*2)+(count);
        cout<<total_balloon<<endl;

    }

}

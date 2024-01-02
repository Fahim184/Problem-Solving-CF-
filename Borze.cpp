#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[205];
    int i,length,count=0,flag=0;
    gets(arr);
    length=strlen(arr);
    for(i=0; i<length; i++)
    {
        if(arr[i]=='.')
        {
            cout<<"0";

        }
        else
        {
            for(i=i; i<length;)
            {
                if(arr[i]=='-')
                {
                    if(arr[i]=='-'&& arr[i+1]=='-')
                    {
                        cout<<"2";
                        i+=2;
                    }
                    else
                    {
                        cout<<"1";
                        i+=2;
                    }
                }
                else
                {
                    cout<<"0";
                    i++;
                }
            }

        }

    }

}

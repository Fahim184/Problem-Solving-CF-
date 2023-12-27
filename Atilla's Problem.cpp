#include<iostream>
using namespace std;
int main()
{
    char arr[101];
    int t,n,i,max;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        cin>>arr;
        max=arr[0];
        for(int j=0;j<n;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }

        }
        cout<<((max+4)-100)<<endl;

    }

   return 0;
}

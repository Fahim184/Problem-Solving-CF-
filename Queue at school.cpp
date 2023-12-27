#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j;
    char arr[100];
    cin>>n>>t;
    cin>>arr;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;)
        {
            if(arr[j]=='B' && arr[j+1]=='G')
            {
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                j+=2;
            }
            else
            {
                j++;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<arr[j];
    }
}

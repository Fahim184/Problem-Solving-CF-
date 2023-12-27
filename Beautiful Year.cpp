#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string arr[100000],brr[100000];
   getline(cin,arr);
   int i,l=strlen(arr),flag=0;
   for(i=0;i<l;i++)
   {
       for(int j=i+1;j<l;j++)
       {
           if(arr[i]==arr[j])
              {
                 flag=1;
              }
       }
   }


}

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
  char arr[110],brr[110];
  int i,l,j;
  cin>>arr;
  cin>>brr;
  l=strlen(arr);
  int flag=0;
  for(i=0,j=(l-1);i<l;i++,j--)
  {
      if(arr[i]!=brr[j])
      {
          flag=1;
      }
  }
  if(flag==1)
  {
      cout<<"NO";
  }
  else
  {
      cout<<"YES";
  }
  return 0;
}


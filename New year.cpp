#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
  int arr[10],max=0,min=101;

  for(int i=0;i<3;i++)
  {
      cin>>arr[i];
  }

  for(int i=0;i<3;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
      if(arr[i]<min)
      {
          min=arr[i];
      }
  }
  int sum=(max-min);
  cout<<sum;
  return 0;
}


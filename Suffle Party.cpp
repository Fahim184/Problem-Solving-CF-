#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
         long long n,i;
         cin>>n;
         for(i=1;i<=n;)
         {
            i*=2;
            if(i>n)
            break;
         }
         cout<<i/2<<endl;
    }

}
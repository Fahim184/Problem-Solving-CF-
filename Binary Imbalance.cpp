#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++){
        if(s[i]=='0')
        {
            flag=1;
        }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
   
    
    }
}
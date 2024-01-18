#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    if(stoi(s)%7==0)
    {
        cout<<s<<endl;
    }
    else
    {
        s[((s.size())-1)]='0';
         int n2=stoi(s);
        for(;;)
        {
            if(n2%7==0)
            {
                cout<<n2<<endl;
                break;
            }
            else
            {
                n2++;
            }
        }
    }
    }
   

}
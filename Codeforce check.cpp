#include<iostream>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>c;
        if(c=='c'|| c=='o' || c=='d' || c=='e' || c=='f' || c=='o' || c=='r' || c=='c' || c=='e' || c=='s')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}


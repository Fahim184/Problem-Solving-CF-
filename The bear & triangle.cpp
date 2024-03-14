#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,x1,y1;
    cin>>x>>y;
    long long res=abs(x)+abs(y);
    if(x>0 && y>0)
    cout<<"0"<<" "<<res<<" "<<res<<" "<<"0"<<endl;
    else if(x<0 && y<0)
    cout<<(-res)<<" "<<"0"<<" "<<"0"<<" "<<(-res)<<endl;
    else if(x>0 && y<0)
    cout<<"0"<<" "<<(-res)<<" "<<res<<" "<<"0"<<endl;
    else 
    cout<<(-res)<<" "<<"0"<<" "<<"0"<<" "<<res<<endl;
}
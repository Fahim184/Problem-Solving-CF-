#include<iostream>
using namespace std;
int main(){

    int n,i,sum;
    cin>>n;
    for(i=1;;i++)
    {
        sum=5*i;
        int step=i;
        if(sum>=n)
        {
            break;
        }
    }
    cout<<i;
}

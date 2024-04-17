#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,arr[250];
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+2*n);
        for(int x=0,y=n;x<n-1;x++)
        {
            sum+=(abs(arr[x]-arr[x+1])+abs(arr[y]-arr[y+1]));
            y++;
        }
        cout<<sum<<endl;
        for(int i=0,j=2*n-1;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            j--;
        }

    }
}
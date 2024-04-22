#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,row,column;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int flag=0;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if((i+2<=m && j+1<=n)||(j+2<=n && i+1<=m)||(i-2>=1 && j-1>=1)||(j-2>=1 && i-1>=1)
                        || (i-2>=1 && j+1<=n)||(i+2<=m && j-1>=1)||(j-2>=1 && i+1<=m)||(j+2<=n && i-1>=1)
                  )
                    continue;
                else
                {
                    flag=1;
                    row=j;
                    column=i;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<n<<" "<<m<<endl;
        else
            cout<<row<<" "<<column<<endl;


    }
}

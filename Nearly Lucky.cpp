
#include <iostream>
using namespace std;
int main()
{
    int flag2 = 0, count = 0;
    long long int n;
    cin >> n;
    while (1)
    {

        if (n % 10 == 4 || n % 10 == 7)
        {
            flag2++;
        }
        if(n / 10 ==0)
        {
            break;
        }
        n = n / 10;
    }
   // cout<<flag2<<endl;

        while (1)
        {
            if (flag2 % 10 != 4 && flag2 % 10 != 7)
            {
                count++;
            }
            if(flag2 / 10==0)
            {
                break;
            }
            flag2=flag2 / 10;
        }
        if(count==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

}





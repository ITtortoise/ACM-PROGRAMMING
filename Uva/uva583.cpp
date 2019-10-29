#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k,m,o,p,a[sz],b[sz];
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        cout<<n<<" = ";
         if(n<0)
        {
            n=n*(-1);
            cout<<"-1 x ";
        }
        for(i=2; i*i<=n; i++)
            if(n%i==0)
            {
                n=n/i;
                cout<<i<<" x ";
                i=1;
            }
        cout<<n<<endl;
    }
    return 0;

}








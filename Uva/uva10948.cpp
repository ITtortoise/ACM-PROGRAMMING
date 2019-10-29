#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000001
long long a[sz];
long long amt[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll i,j,n,m,k,l,p,c,q;
    a[0]=a[1]=1;
    for(i=2; i<=sqrt(1e6); i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<=1e6; j=j+i)
                a[j]=1;
        }
    }

    while(cin>>n)
    {
        if(n==0)
            break;
        c=0;
        for(l=2; l<=n/2; l++)
        {
            if(a[l]==0&&a[n-l]==0)
            {
                c=1;
                cout<<n<<":"<<endl<<l<<"+"<<n-l<<endl;
                break;
            }
        }
        if(c==0)
            cout<<n<<":"<<endl<<"NO WAY!"<<endl;
    }


    return 0;
}


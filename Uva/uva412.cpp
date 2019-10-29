#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long ll;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;
        ll i,j,k,a[10000],c=0,p,u=0;
        double q=0;
        memset(a,0,sizeof(a));
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
            {
                u++;
                k=gcd(a[i],a[j]);
                // cout<<k<<endl;
                if(k==1)
                    c++;
            }

        if(c==0)
            cout<<"No estimate for this data set."<<endl;
        else
        {
            q=double(sqrt((u*6.0)/c));
            cout<<fixed<<q<<setprecision(6)<<endl;
        }


    }
    return 0;
}


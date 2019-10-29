#include<bits/stdc++.h>
#define sz 10000
long long a[sz];
long long amt[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c=0,p,q,t;
    a[0]=a[1]=1;
    for(i=2; i<=sqrt(3000); i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<=3000; j=j+i)
                a[j]=1;
        }
    }

    for(p=0; p<=3000; p++)
    {
        l=0;
        if(a[p]==1)
            for(q=2; q<=p/2; q++)
                if(a[q]==0&&p%q==0)
                  l++;
            if(l==2)
                c++;

         amt[p]=c;

        //cout<<p<<" "<<c<<endl;

    }
    cin>>n;
    cout<<amt[n]<<endl;
}
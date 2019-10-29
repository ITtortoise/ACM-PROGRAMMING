#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000000
long long a[sz];
long long amt[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c=0,p,q,t;
    a[0]=a[1]=1;
    for(i=2; i<=sqrt(1000000); i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<=1000000; j=j+i)
                a[j]=1;
        }
    }

    for(p=0; p<=1000000; p++)
    {
        int rem=0,s=0;
        q=p;
        while(q>0)
        {
            rem=q%10;
            s=s+rem;
            q=q/10;
        }
        if(a[s]==0&&a[p]==0)
            c++;
        amt[p]=c;
        //cout<<p<<" "<<c<<endl;
    }
    cin>>t;
    while(t--)
    {
        cin>>k>>l;
        cout<<amt[l]-amt[k-1]<<endl;
    }



}





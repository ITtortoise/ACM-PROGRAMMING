#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,s,s2,c,x,r,l,res,mod,a[sz],MX,d=1;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
   cin>>n;
   for(i=n/2;i>=1;i--)
   {
       for(j=i;j>=1;j--)
        cout<<"*";
       for(k=d;k>=1;k--)
        cout<<"D";
       for(m=i;m>=1;m--)
        cout<<"*";
       d=d+2;
       cout<<endl;
   }
   for(t=1;t<=n;t++)
    cout<<"D";
    cout<<endl;
    x=n-2;
   for(t=1;t<=n/2;t++)
   {
       for(r=t;r>=1;r--)
        cout<<"*";
       for(l=x;l>=1;l--)
        cout<<"D";
       for(s=t;s>=1;s--)
        cout<<"*";
       x=x-2;
       cout<<endl;
   }


    return 0;
}


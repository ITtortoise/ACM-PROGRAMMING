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

//ll n,m,k,i,j,t,s,s2,c,x,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    int n,b,c,d=3,i,a[10000];
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]==d)
        {
            cout<<"NO";
            return 0;
        }
        if(a[i]==1)
            d=2;
        if(a[i]==2)
            d=1;
        if(a[i]==3)
            d=a[i-1];


    }

}





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

ll n,m,k,i,j,t,s,s2,c=0,x,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
            c++;
        else if(a[i]<a[i-1]&&a[i]<a[i+1])
            c++;
    }
    cout<<c;


    return 0;
}


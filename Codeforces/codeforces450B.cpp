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

ll n,k,i,j,t,s,s2,c,x,y,m=1000000007,z,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>x>>y>>n;
    a[1]=x;a[2]=y;a[3]=y-x;a[4]=-x;a[5]=-y;a[0]=x-y;
    for(i=1;i<=5;i++)
        cout<<a[i]-y<<" ";
    cout<<a[0]-y<<" ";
    /*t=n%6;
    //if(a[t]<0)
        cout<<m+a[t]<<" ";
    //else
     cout<<a[t];*/







    return 0;
}


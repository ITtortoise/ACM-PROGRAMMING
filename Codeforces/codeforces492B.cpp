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

ll n,m,k,i,j,t,s,s2,c,x,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>l;

    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);


    double max2=max(a[0],(l-a[n-1]));
    double max1;
    for(i=0; i<n-1; i++)
    {
        max1=a[i+1]-a[i];
        max1=max1/2;
        if(max1>max2)
            max2=max1;
    }
    printf("%f0000",max2);

    return 0;
}


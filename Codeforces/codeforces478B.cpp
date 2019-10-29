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

ll n,m,k,i,j,t,s1=0,s2=0,c=0,x,r,r1,r2,rem,mod,a[sz],MX,min1=0,max1=0;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>m>>t;
    r=m/t;
    r1=r;
    r2=r1;
    rem=m%t;
    for(i=1; i<=rem; i++)
    {
        s1=s1+(r1+1)*(r1+1-1)/2;
         //cout<<s1<<" ";
    }
    //cout<<endl;

    for(j=1;j<=t-rem;j++)
    {
        s2=s2+(r2*(r2-1))/2;
        //cout<<s2<<" ";
    }
    min1=s1+s2;
    x=m-(t-1);
    max1=(x*(x-1))/2;
    cout<<min1<<" "<<max1<<endl;

    return 0;
}


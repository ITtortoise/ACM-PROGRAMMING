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

ll n,m,k,i,j,t,s,s2,c,x,r=0,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>m>>t;
    for(i=0; i<m+1; i++)
        cin>>a[i];
    k=a[m];
    for(i=0; i<m; i++)
    {   c=0;
        while(a[m]>0||a[i]>0)
        {
            if(a[m]%2!=a[i]%2)
                c++;
            //cout<<a[m]%2<<" "<<a[i]%2<<endl;
               a[m]=a[m]/2;
               a[i]=a[i]/2;

        }
        //cout<<c<<endl;
        a[m]=k;
        if(c<=t)
            r++;

    }
     cout<<r<<endl;
    return 0;
}

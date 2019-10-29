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

ll n,m,k,i,j,t,c,x,r,res,mod,a[sz],MX,s=0;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
     cin>>n>>x;
     for(i=0;i<n;i++)
     {
         cin>>c;
         v1.pb(c);
     }
     for(i=0;i<n-1;i++)
     {
         s=s+v1[i]+1;
         //cout<<s<<" ";
     }
     s=s+v1[n-1];
     if(s==x)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    return 0;
}


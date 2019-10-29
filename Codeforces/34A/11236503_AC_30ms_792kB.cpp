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

ll n,m1,m2,k,i,j,t,c,x,r,res,mod,a[sz],MX,y;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.pb(c);
    }
    m1=abs(v1[0]-v1[n-1]);
    x=n-1;
    y=0;
    for(i=0; i<n-1; i++)
    {
        m2=abs(v1[i]-v1[i+1]);
           if(m2<m1)
        {
            m1=m2;
            x=i;
            y=i+1;
        }
    }
    cout<<x+1<<" "<<y+1<<endl;

    return 0;
}

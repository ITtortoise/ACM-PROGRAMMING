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

ll n,m1,k,i,j,t,c1,c2,x=0,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>s,d,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c1>>c2;
        s.pb(c1);
        d.pb(c2);
    }
    m1=s[0];
    for(i=1; i<n; i++)
    {
        for(j=0; j<1000000; j++)
        {
            x=s[i]+(j*d[i]);
            if(x>m1)
            {
                m1=x;
                //cout<<s[i]<<" "<<m1<<endl;
                break;
            }
        }
    }
    cout<<m1<<endl;
    return 0;
}

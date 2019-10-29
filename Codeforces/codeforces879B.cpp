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
ll n,m,k,i,j,t,c,x=0,x1,t1,t2,res,mod,a[sz],MX1=0,MX2,y=0,y1=0;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
vector<ll>::iterator it;
int main()
{
    cin>>n>>m;
    for(k=0; k<n; k++)
    {
        cin>>c;
        v1.pb(c);

    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(v1[i]>v1[j])
                x++;
            else
            {
                x=1;
                break;
            }
            if(x==m)
            {
                cout<<v1[i];
                return 0;
            }
        }
    }
    sort(v1.begin(),v1.end());
    cout<<v1[n-1];

    return 0;
}


/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
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

ll n,m,k,i,j,t,c1,c2,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn,l=0,r=0,u=0,lo=0;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c1>>c2;
        v.pb(mp(c1,c2));
    }
    for(i=0; i<n; i++)
    {   l=0,r=0,u=0,lo=0;
        for(j=0; j<n; j++)
        {
            if(v[j].f<v[i].f&&v[j].s==v[i].s)
                l=1;
             else if(v[j].f>v[i].f&&v[j].s==v[i].s)
                r=1;
             else if(v[j].s<v[i].s&&v[j].f==v[i].f)
                u=1;
             else if(v[j].s>v[i].s&&v[j].f==v[i].f)
                lo=1;


        }
        if(l==1&&r==1&&u==1&&lo==1)
         cnt++;
        //cout<<l<<" "<<r<<" "<<u<<" "<<lo<<endl;

    }
    cout<<cnt;


    return 0;
}


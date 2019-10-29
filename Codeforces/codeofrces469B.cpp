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

ll n,m,k,i,j,t,sum=0,x,r,l,rem,y,z,mod,a[sz],b[sz],c[sz],d[sz],MX,p,q,ct=0;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>p>>q>>l>>r;
    for(i=0; i<p; i++)
        cin>>a[i]>>b[i];
    for(j=0; j<q; j++)
        cin>>c[j]>>d[j];


    for(k=l; k<=r; k++)
    {   t=0;
        for(j=0; j<q; j++)
        {
            for(i=0; i<p; i++)
            {
                if(c[j]+k<=b[i]&&d[j]+k>=a[i])
                {
                    ct++;
                    t=1;
                    break;

                }
            }
            if(t==1)
                break;

        }
    }
    cout<<ct;




    return 0;
}

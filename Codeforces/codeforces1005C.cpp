#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;


int main()
{
    ll n,m,k,i,d,j,t=1,f,r,l,c,sum=1,cnt=0,x,y,a[sz],rem,mod,mx,mn;
    string str1,str2;
    map<ll,ll>_mp;
    set<ll>::iterator it;
    vector<pair<ll,ll> >v;
    vector<ll>v1,v2;
    vector<ll>vv[51];
    set<ll>st;

    for(i=1; i<=; i++)
    {
        t=1;
        for(j=1; j<=i; j++)
            t=t*2;
        v1.push_back(t);
    }
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        v2.pb(m);
        a[m]=-1;
        _mp[m]++;
    }
    /*for(i=0; i<v2.size(); i++)
    {
        for(j=0; j<v1.size(); j++)
        {
            ll temp=v1[j]-v2[i];
            if(a[temp]==-1&&_mp[v2[j]]>0&&_mp[temp]>0)
            {
                _mp[v2[j]]--;
                _mp[temp]--;
            }
            else
                cnt++;

        }
    }*/
    cout<<cnt<<endl;

    main();


}
m

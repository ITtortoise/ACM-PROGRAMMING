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
    ll n,m,k,i,d=0,j,t,f,r,l,c=0,t1,t2,t3,sum=0,temp,temp1,cnt=0,x,y,a[10000],rem,mod,mx,mn;
    memset(a,0,sizeof(a));
    string str1,str2;
    map<ll,ll>_mp;
    map<ll,ll>::iterator it,it1;
    vector<ll>v,v1,v2,v3;
    vector<ll>vv[51];
    set<ll>st;

    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>t;
        v.pb(t);
        _mp[t]++;
    }

    for(f=100; f>=1; f--)
    {
        //cout<<it->ss<<endl;
        for(it1=_mp.begin(); it1!=_mp.end(); it1++)
        {
            sum=sum+(it1->ss/f);
            //cout<<it1->ss<<' ';

        }
        //cout<<sum<<endl;
        if(sum>=n)
        {
            cout<<f<<' ';
            return 0;
        }
        sum=0;
    }

    cout<<d<<endl;
    str1.clear();
    str2.clear();
    _mp.clear();
    v.clear();



    //main();


}


/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
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
    ll n,n1=0,m,k,i,d=0,j,t,f,r,l,c,t1,t2,t3,sum=0,temp,temp1,cnt=0,x,y,a[10000],rem,mod,mx,mn;
    memset(a,0,sizeof(a));
    string str1,str2;
    map<ll,ll>_mp;
    map<ll,ll>::iterator it;
    vector<ll>v,v1,v2,v3;
    vector<ll>vv[51];
    set<ll>st;
    set<ll>::iterator it1;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        n1=n1+a[i]*10;
    }

    sort(a,a+n);
    ll need=(n*45)-n1;
    //cout<<need<<' ';
    if(need<=0)
        cout<<cnt<<endl;
    else
    {
        for(i=0; i<n; i++)
        {
            if(a[i]<5)
            {
                need=need-(50-(a[i]*10));
                cnt++;
                if(need<=0)
                {
                    cout<<cnt<<endl;
                    break;
                }
            }

        }
    }
    main();


}


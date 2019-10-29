/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  ll    long long
#define  mx    100001
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  dbg    cout<<"welldone";
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",value)

using namespace std;


int main()
{
    vector<pair<ll,ll> >v;
    ll n,m,k,i,s,s1,t1,t2,t3,t4,temp;


    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>t1>>t2>>t3>>t4;
        s=t1+t2+t3+t4;
        v.push_back(make_pair(s,i));
        if(i==1)
            temp=s;
    }
    sort(all(v));
    reverse(all(v));

    for(k=0; k<n; k++)
    {
        if(v[k].ff==temp)
        {
            cout<<k+1<<endl;
            return 0;
        }

    }


}


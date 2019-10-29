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
    ll n,m,k,i,j,s1=0,s2=0,c=0,x,y,a[sz],b[sz],ans=0 ;
    string str1,str2;
    map<ll,ll>_mp;
    set<ll>::iterator it;
    vector<pair<ll,ll> >v;
    vector<ll>v1;
    vector<ll>vv[51];
    set<ll>st;

    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];

    for(i=1,j=n; c<n; i++,j--)
    {
        if(s1<=s2)
        {
            if(s1==s2)
                ans=s1;
            s1=s1+a[i];
            c++;
            j++;
            if(s1==s2)
                ans=s1;

        }
        else if(s1>s2)
        {
            if(s1==s2)
                ans=s1;
            s2=s2+a[j];
            c++;
            i--;
            if(s1==s2)
                ans=s1;
        }
        //cout<<s1<<' '<<s2<<endl;

    }
     cout<<ans<<endl;

    main();


}


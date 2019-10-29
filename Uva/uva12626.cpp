///"BISMILLAHIR RAHMANIR RAHIM....."
///"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
///submited by:SHOHAG(ICT,MBSTU).......
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  dbg    cout<<"welldone"
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",&value)
using namespace std;

ll n,i,j,tc,sum,cnt,a[10000],rem,mod,mx,mn;
//memset(a,0,sizeof(a));
string s,s2;
map<char,ll>_mp;
vector<ll>vec;
vector<ll>G[51];
set<ll>st;

int main()
{
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        for(i=0; s[i]; i++)
        {
            if(s[i]=='A'||s[i]=='G'||s[i]=='I'||s[i]=='M'||s[i]=='R'||s[i]=='T')
                _mp[s[i]]++;
        }



        if(_mp['A']<3||_mp['R']<2||_mp['M']==0||_mp['G']==0||_mp['T']==0||_mp['I']==0)
            cout<<0<<endl;

        else
        {
            mn=0;
            for(auto i:_mp)
            {
                if(i.ff=='A')
                {
                    vec.pb(i.ss/3);
                }
                else if(i.ff=='R')
                {
                    vec.pb(i.ss/2);
                }
                else if(i.ff=='G')
                {
                    vec.pb(i.ss);
                }
                else if(i.ff=='M')
                {
                    vec.pb(i.ss);
                }
                else if(i.ff=='I')
                {
                    vec.pb(i.ss);
                }
                else if(i.ff=='T')
                {
                    vec.pb(i.ss);
                }
            }
            sort(all(vec));
            cout<<vec[0]<<endl;

        }
//    for(i=0;i<vec.size();i++)
//     cout<<vec[0]<<endl;
        vec.clear();
        _mp.clear();

    }
    //main();


}



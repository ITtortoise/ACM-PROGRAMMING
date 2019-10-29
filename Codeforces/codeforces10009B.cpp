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

ll n,m,k,i,d,j,t,f,r,l,c,sum=1,cnt,x,y,a[10000000],b[100000],rem,mod,mx,mn;
string s1,s2;
map<ll,ll>_mp;
set<ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1;
vector<ll>vv[51];
set<ll>st;
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>d;
        v1.push_back(d);
    }
    //sort(all(v1));
    //reverse(all(v1));
    for(i=0; i<m; i++)
    {
        cin>>t;
        for(j=f; j<n; j++)
        {
            if(t>=v1[j]&&v1[j]>0)
            {
                v1[j]=0;
                cnt++;

                break;
            }
            else
                v1[j]=0;
        }

    }

    cout<<cnt;
    cnt=0;
    s1.clear();
    v1.clear();
    v.clear();
    _mp.clear();
    st.clear();

    //main();


}


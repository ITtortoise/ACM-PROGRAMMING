/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,d,j,t,f,r,l,c,sum=1,cnt,x,y,a[10000000],rem,mod,mx,mn;
string s1,s2;
map<ll,ll>_mp;
set<ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1;
vector<ll>vv[51];
set<ll>st;
int main()
{

    cin>>s1;
    for(i=0;; i++)
    {
        f=0;
        for(j=0; j<s1.size(); j++)
        {

            if(s1[j]=='2'&&s1[j+1]=='1')
            {
                swap(s1[j],s1[j+1]);
                f=1;
            }
            if(s1[j]=='1'&&s1[j+1]=='0')
            {
                swap(s1[j],s1[j+1]);
                f=1;
            }


        }
        if(f==0)
         break;
    }


    cout<<s1;



    s1.clear();
    v1.clear();
    v.clear();
    _mp.clear();
    st.clear();

    //main();


}

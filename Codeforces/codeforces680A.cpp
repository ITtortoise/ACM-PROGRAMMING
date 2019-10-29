/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i=0,j,t,f,t1,t2,t3,t4,t5,r,l,c,s=0,sum=INT_MAX,cnt=0,x,y,amt[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>a,v1,v2,v3;
vector<ll>v4[51];
int main()
{
    getline(cin,s1);
    stringstream ss(s1);
    while(ss>>n)
        a.pb(n);
    for(i=0; i<a.size(); i++)
    {
        //cin>>a[i];
        s=s+a[i];
        M[a[i]]++;
    }
    //cout<<M.size()<<endl;
    mn=s;

    for(it=M.begin();it!=M.end();it++)
    {
        if(it->ss==2)
            sum=s-(2*(it->ff));
        else if(it->ss>2)
            sum=s-(3*(it->ff));

        mn=min(mn,sum);

    }
    cout<<mn;



    return 0;
}


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

ll n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3,s4,s5;
map<string,string>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>s1>>s2;
        s2+=';';
        M[s2]=s1;
    }
    //getchar();
    //cin>>s3;
    //cout<<M[s3];
    getchar();
    for(i=0; i<m; i++)
    {
        cin>>s3>>s4;
        cout<<s3<<' '<<s4<<' '<<'#';
        cout<<M[s4]<<endl;
        s3="",s4="";
    }



    return 0;
}



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

ll n,m,k,i,j=0,t,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3,s;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>s1;
    getchar();
    cin>>s2;
    sort(all(s2));
    reverse(all(s2));

    for(i=0; i<s1.size()&&s2.size()>0; i++)
        if(s2[j]>s1[i])
        {
            s1[i]=s2[j];
            j++;
        }
        cout<<s1;





}



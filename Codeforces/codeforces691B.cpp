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
string s1,s2,s3;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>s1;
    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]=='d')
            s1[i]='b';
        if(s1[i]=='q')
            s1[i]='p';
    }

    if(s1.size()%2!=0&&s1.size()>1)
    {
        for(i=0; i<s1.size()/2; i++)
            s2+=s1[i];
        for(j=s1.size()-1; j>s1.size()/2; j--)
            s3+=s1[j];
        //cout<<s2<<' '<<s3;
        if(s2==s3)
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }
    else
        cout<<"NIE";

    return 0;
}



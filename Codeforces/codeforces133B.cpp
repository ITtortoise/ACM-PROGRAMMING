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

ll n,m,k,i,j,t,t1,t2,t3,t4,t5,r,l,c,s=1,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<char,string>M;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    M['>']="1000";
    M['<']="1001";
    M['+']="1010";
    M['-']="1011";
    M['.']="1100";
    M[',']="1101";
    M['[']="1110";
    M[']']="1111";
    cin>>s1;
    l=s1.size();
    for(i=0;i<l;i++)
       s2+=M[s1[i]];

    reverse(all(s2));
   for(i=0;i<s2.size();i++)
   {
       if(s2[i]=='1')
       {
           for(k=1;k<=i;k++)
            s=(s*2)%1000003;
            //cout<<s<<endl;
            sum=(sum+s)%1000003;
            s=1;
       }
   }
   cout<<sum;

    return 0;
}



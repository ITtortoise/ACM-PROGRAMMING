/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    10000001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,f,t1,t2,t3,t4,t5,p,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
   a[0]=1;
   a[1]=1;
   for(p=2;p<=sqrt(1e6);p++)
   {
       if(a[p]==0)
       {
           for(j=p+p;j<=1e6;j+=p)
            a[j]=1;
       }
   }
   //cout<<a[97];
   cin>>n;
   cout<<n<<" ";
   for(i=2;i<=1e6;i++)
   {
       if(a[i]==0)
       {
           while(n>0&&n%i==0)
           {
               n=n/i;
               if(n<=0)
                  return 0;
               cout<<n<<" ";
           }
       }

   }

    return 0;
}



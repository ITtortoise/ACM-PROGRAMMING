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

ll n,m,k,i,j,t,t1,t2,t3,f,t4,t5,r,l,c,h,sum=0,m1,h1,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>h>>m;
    x=m;
    y=h;
      for(i=1;; i++)
    {
        m1=m;
        h1=h;
        while(m1>0)
        {
            rem=m1%10;
            m1=m1/10;
            if(rem==7)
            {
                cout<<cnt;
                return 0;
            }
        }
        while(h1>0)
        {
            rem=h1%10;
            h1=h1/10;
            if(rem==7)
            {
                cout<<cnt;
                return 0;
            }
        }
        cnt++;
        f=m;
        if(f-n<=0)
        {
            m=m+60;
            h=h-1;
            if(h==0)
                break;

        }
        m=m-n;
        cout<<h<<" "<<m<<endl;

   }
   cout<<cnt<<endl;
   for(i=1;; i++)
    {
        m1=x;
        h1=y;
        while(m1>0)
        {
            rem=m1%10;
            m1=m1/10;
            if(rem==7)
            {
                cout<<cnt;
                return 0;
            }
        }
        while(h1>0)
        {
            rem=h1%10;
            h1=h1/10;
            if(rem==7)
            {
                cout<<cnt;
                return 0;
            }
        }
        cnt++;
        x=x+n;
        if(x>=60)
        {
            x=x%60;
            y=y+1;
            if(y==25)
                break;

        }
        cout<<y<<" "<<x<<endl;


   }
   cout<<cnt;


    return 0;
}



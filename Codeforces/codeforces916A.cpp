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

ll n,m=0,k,i=0,j,t,t1,t2,t3,t4,t5,r,l,c,h,h1,mid=0,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>h1>>m;
    for(i=m; i>-70; i-=n)
    {
        if(i<0)
        {
            h=h1;
            h=h-1;
            while(h>6)
            {
                rem=h%10;
                h=h/10;
                if(rem==7)
                {
                    cout<<(m/n);
                    return 0;
                }
            }
            cnt=1;
        }
        if(i<0)
            t=60+i;
        if(i>=0)
            t=i;
        t1=t;
        while(t1>6)
        {
            rem=t1%10;
            t1=t1/10;
            if(rem==7)
            {
                if(i>=0)
                {
                    t3=(m-t)/n;
                    cout<<t3;
                    return 0;
                }
                else
                {
                  t3=(m+abs(i))/n;
                  cout<<t3;
                  return 0;
                }
            }
        }

        //cout<<t<<endl;


    }

    return 0;
}


/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  ll    long long
#define  mx    100001
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  dbg    cout<<"NO"<<endl
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",value)

using namespace std;


int main()
{
    string str,str2;
    map<ll,ll>mp,mp2,mp3;
    map<ll,ll>::iterator it;
    vector<ll>v,v1,v2,v3;
    vector<ll>vv[51];
    set<ll>st;
    set<ll>::iterator it1;
    ll n,m,k,i=0,d=0,j,t,f,r,l,c=0,s,s1,t1,t2,t3,sum=0,temp,temp1,cnt=0,x,y,a[99999],rem,mod,mn;
    memset(a,0,sizeof(a));
    cin>>t;
    for(t1=0; t1<t; t1++)
    {
        cin>>n;
        cin>>str;

        ll l1=str.size();
        for(i=0,j=l1-1; i<str.size()/2; i++,j--)
        {

            //cout<<str[i]<<' '<<str[j]<<endl;

            int as1=str[i];
            int as2=str[j];
            if(abs(as1-as2)==2||abs(as1-as2)==0)
                //cout<<as1<<' '<<as2<<endl;
                continue;
            else
            {
                dbg;
                //break;
               goto e;
            }

        }

        cout<<"YES"<<endl;
        e:
        str.clear();
    }

    //main();


}

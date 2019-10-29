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
#define  dbg    cout<<"welldone";
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",value)

using namespace std;


int main()
{
    string str,str1,str3,str4;
    map<ll,ll>mp,mp2,mp3;
    map<ll,ll>::iterator it;
    vector<ll>v,v1,v2,v3;
    vector<ll>vv[51];
    set<string>st;
    set<ll>::iterator it1;
    ll n,m,k,i=0,d=0,j,t,f,r,l,c=0,s,s1,t1,t2,t3,sum=0,temp,temp1,cnt1=1,cnt2=1,x,y,a[99999],rem,mod,mn;
    memset(a,0,sizeof(a));
    cin>>n>>m;
    cin>>str;
    if(str[0]!=str[n-1]||n==1)
    {
        for(i=0;i<m;i++)
            cout<<str;
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(str[0]==str[i+1])
                cnt1++;
            else
                break;
        }
        str1=str;
        reverse(all(str1));
        for(i=0;i<n-1;i++)
        {
            if(str1[0]==str1[i+1])
                cnt2++;
            else
                break;
        }


      if(cnt1==cnt2)
      {
          for(i=cnt1;i<str.size();i++)
            str3+=str[i];
      }
      else
      {
          for(i=min(cnt1,cnt2);i<str.size();i++)
            str3+=str[i];
      }
      cout<<str;
      for(i=1;i<m;i++)
        cout<<str3;

    }


   // main();


}


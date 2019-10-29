/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;


int main()
{
    ll n,m,k,i,d=0,j,t,f,r,l,c,t1,t2,t3,sum=0,temp,temp1,cnt,x,y,a[10000],rem,mod,mx,mn;
    string str1,str2;
    map<ll,ll>_mp;
    set<ll>::iterator it;
    vector<ll>v,v1,v2,v3;
    vector<ll>vv[51];
    set<ll>st;

    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v1.pb(t);
        a[i]=t;
    }
    sort(all(v1));
    reverse(all(v1));
    for(i=0; i<k; i++)
    {
        sum=sum+v1[i];
        v2.pb(v1[i]);
    }
    cout<<sum<<endl;



    for(i=0; i<k; i++)
    {
        for(j=0; j<n; j++)
        {
            if(v2[i]==a[j])
            {
              a[j]=0;
              v3.pb(j+1);
              break;
            }
        }

    }
    sort(all(v3));

    if(v3.size()==1)
        cout<<n<<endl;
    else if(v3.size()==2)
    {
        cout<<v3[0]<<' ';
        cout<<n-v3[0]<<endl;
    }
    else if(v3.size()>2)
    {
        cout<<v3[0]<<' ';
        for(i=0;i<v3.size()-2;i++)
            cout<<v3[i+1]-v3[i]<<' ';
        cout<<n-(v3[v3.size()-2])<<endl;
    }

  // main();


}


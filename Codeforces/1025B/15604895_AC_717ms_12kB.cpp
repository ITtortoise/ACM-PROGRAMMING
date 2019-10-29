/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  ll    long long
#define  mx    100001
#define  pb    push_back
#define  ff     first
#define  ss     second
#define  dbg    cout<<"welldone";
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",value)

using namespace std;
string str,str2;
map<ll,ll>mp,mp2,mp3;
map<ll,ll>::iterator it;
vector<ll>v,v1,v2,v3;
vector<ll>vv[51];
set<ll>st;
set<ll>::iterator it1;
ll n,m,k,i=0,d=0,j,t,f,r,l,c=0,s,s1,t1,t2,t3,sum=0,temp,temp1,cnt,x,y,a,b,rem,mod,mn;


int factorise(int b)
{
    for(int i=2; i<=sqrt(b); i++)
    {
        while(b%i==0)
        {
            b=b/i;
            st.insert(i);
        }
    }
    if(b>1)
        st.insert(b);
}


int main()
{

    cin>>n;
    for(k=0; k<n; k++)
    {
        cin>>t1>>t2;
        if(k==0)
        {
            factorise(t1);
            factorise(t2);
        }
        for(auto i:st)
        {
            if(t1%i==0||t2%i==0)
                mp[i]++;

        }
    }
    for(auto i:mp)
    {
        if(i.ss==n)
        {
            cout<<i.ff<<endl;
            return 0;
        }
    }
    cout<<-1;


    //main();


}


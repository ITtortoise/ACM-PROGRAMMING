/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,m,k,t,L,l,r,v,sum=0,cnt,a,b,d,rem,mod,mx,mn;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cnt=0;
    cin>>t;
    while(t--){
   cin>>L>>v>>l>>r;
   for(i=v;i<=L;i+=v)
   {
       if(i<l||i>r)
        //cout<<i;
        cnt++;
   }
   cout<<cnt<<endl;}
   //main();
}

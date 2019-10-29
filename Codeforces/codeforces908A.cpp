/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
using namespace std;

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
   cin>>s;
   for(i=0;i<s.size();i++)
   {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
        cnt++;
   }
   cout<<cnt;


    return 0;
}


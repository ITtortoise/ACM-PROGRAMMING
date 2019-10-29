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

ll x,y,z,t1,t2,t3,i,j,temp,sum;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>x>>y>>z>>t1>>t2>>t3;
    ll stair=abs(x-y)*t1;
    ll liftaslo=abs(x-z)*t2+(t3*2);
    ll liftdesti=abs(x-y)*t2+t3;
    ll elevetor=(liftaslo+liftdesti);
    if(elevetor<=stair)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




}


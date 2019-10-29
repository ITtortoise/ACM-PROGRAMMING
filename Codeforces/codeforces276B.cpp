#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,sum=0,c,x,r,l,rem,y,z,mod,amt[sz],MX,odd=0,even=0;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    getline(cin,s1);
    for(i=0;i<s1.size();i++)
      amt[s1[i]-'a']++;
    for(i=0;i<26;i++)
    {
        if(amt[i]%2==0)
            even++;
        else
            odd++;
    }
   if(odd==0||odd==1||odd%2!=0)
    cout<<"First"<<endl;
   else
    cout<<"Second"<<endl;


    return 0;
}


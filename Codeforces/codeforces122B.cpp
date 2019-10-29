/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
using namespace std;

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn,four=0,seven=0;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>s1;
    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]=='4')
            four++;
        else if(s1[i]=='7')
            seven++;
    }
    if(four==0&&seven==0)
        cout<<"-1"<<endl;
    else if(four>=seven)
        cout<<"4"<<endl;
    else
        cout<<"7"<<endl;





    return 0;
}


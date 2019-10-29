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

int n,m,k,i,j,t,f=0,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y, wa[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{

    cin>>s1>>s2>>s3;
    for(i=0; s2[i]; i++)
    {
        c=s2.find('*');
        if(c>=0)
        {
            //cout<<c;
            for(k=c; k<s3.size(); k++)
            {
                if(s2.find(s3[k]))
                {
                    s3.erase(k,1);
                    cout<<"j";
                }
                else
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            break;
    }
    cout<<s3;


    return 0;
}



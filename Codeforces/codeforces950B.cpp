/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1000000
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum1,sum2,cnt,d,rem,mod,mx,mn,v,r,l,a[sz],b[sz];
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<m; i++)
        cin>>b[i];
    ll c=0;

    i=-1;j=-1;
    while(i<n&&j<m)
    {
        if(sum1==sum2)
        {

            i++;j++;
            sum1=a[i];
            sum2=b[j];
            //cout<<i<<' '<<j<<sum1<<' '<<sum2<<endl;
            c++;

        }
        else if(sum1>sum2)
        {
             j++;
            sum2+=b[j];



        }
        else if(sum2>sum1)
        {
              i++;
            sum1+=a[i];



        }
     }
     cout<<c-1;

}

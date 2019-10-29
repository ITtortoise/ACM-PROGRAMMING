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

ll n,i,j,L,m,k,t,sum,cnt,a[10000],b[10000],d,rem,mod,mx,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    ll temp=a[0];
    //cout<<b[j]<<' '<<endl;
    j=1;
    for(i=0; i<n-1; i++)
    {

        b[j]=a[i+1]-a[i];
        //cout<<b[j]<<' '<<endl;
        j++;

    }
        v1.pb(b[0]);
        for(j=1;j<n;j++)
        {
            if(b[j]!=temp)
                v1.pb(b[j]);
            else
                break;

        }
    sum=0;
     cout<<ceil((double)n/(double)v1.size())<<endl;
    for(i=0;i<(n/v1.size());i++)
    {
        sum+=v1.size();
        cout<<sum<<' ';
    }
    if(n%v1.size()>0)
    cout<<sum+n%v1.size()<<' ';



}

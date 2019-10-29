/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  ll    long long
#define  pb    push_back
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,m,k,t,t1,f,sum=0,cnt=1,a,b,d,rem,mod,mx=-1,mn;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v4[51];
int main()
{
    cin>>n>>f;
    for(i=1; i<=n; i++)
    {
        cin>>t;
        if(t==1)
        {
            v.push_back(make_pair(i-f+1,i+f-1));

        }
    }
    sort(all(v));
    if(v[0].ff>1)
    {
        cout<<-1;
        return 0;
    }
    t1=v[0].ss;
    for(i=1; i<v.size(); i++)
    {
        //cout<<v[i].ff<<' '<<v[i].ss<<endl;
        if(v[i].ff<=t1)
        {
            for(j=i; j<v.size(); j++)
            {
                mx=max(mx,v[j].ss);
                else
                {
                    cnt++;
                    break;
                }
            }
            else if (mx>=v[i].ff)
            {
                t1=mx;
                cout<<mx<<' ';
            }
            else
            {
                cout<<-1;
                return 0;
            }

        }
        cout<<cnt;
    }


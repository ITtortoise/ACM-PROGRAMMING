/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,t1=0,t2=0,t3,temp,t5,r,l,f,c,sum=0,cnt=0,x,y,amt[sz],a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
map<ll,ll>::iterator it,itr;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[100000];
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        _map[m]++;
        v4[m].pb(i+1);
    }
    for (it=_map.begin(); it!=_map.end(); it++)
    {
        if(it->second == 1)
            v.pb(mp(it->first,0));
        else if(v4[it->first].size()==2)
            v.pb(mp(it->first,v4[it->first][1]-v4[it->first][0]));

        else
        {
            cnt=0;
            f=0;
            for(j=0; j<v4[it->first].size()-1; j++)
            {
                t1=v4[it->first][j+1]-v4[it->first][j];
                if(j==0)
                    temp=t1;
                if(t1==temp)
                    cnt++;
                if(t1!=temp)
                    break;
                if(cnt==v4[it->first].size()-1)
                    v.pb(mp(it->first,v4[it->first][j+1]-v4[it->first][j]));
            }

        }


    }

sort(v.begin(),v.end());
cout<<v.size()<<endl;
for(i=0; i<v.size(); i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;

return 0;
}



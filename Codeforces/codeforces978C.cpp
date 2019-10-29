/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    ff     first
#define    ss     second

using namespace std;

ll n,m,k,i,j,t,r,l,c,s=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>_list[sz];
vector<ll>::iterator it;
int main()
{
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>t;
        l=l+t;
        a[i]=l;
        for(j=1; j<=t; j++)
        {
            if(i==1)
                _list[i].push_back(j);
            else
                _list[i].push_back(s+j);
        }
        s=s+t;
    }
    //for(k=0; k<m; k++)
    {
        cin>>x;
        for(j=1; j<=n; j++)
        {
            for(i=0; i<_list[1].size(); i++)
            {
                it=find(_list[1].begin(); _list[1].end(),x);
                if(it!=_list[1].end())
                {
                    y=x-a[j-1];
                    //if(y>=0)
                          cout<<j<<y<<endl;

                }
            }
        }
    }
    return 0;
}


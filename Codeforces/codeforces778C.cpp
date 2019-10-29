/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k=0,i,j,t,t1,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>t1;
        t=t+t1;
        v1.push_back(t);

    }
    for(i=0; i<m; i++)
    {
        cin>>t1;
        v2.push_back(t1);
    }
    for(i=0; i<v1.size(); i++)
    {
        for(j=k; j<v2.size(); j++)
        {
            if(v2[j]<=v1[i])
            {
                k++;

                if(i==0)
                    cout<<i+1<<' '<<v2[j]<<endl;
                else

                    cout<<i+1<<' '<<v2[j]-v1[i-1]<<endl;

            }
        }

    }


    return 0;
}

/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
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

ll n,m,k,i,j,t,r,l,c,sum=0,s1=0,s2=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;

map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        if(t>0)
            v1.pb(t);
        else if(t<0)
            v2.pb(t);
        v3.pb(t);

    }
    for(j=0; j<v1.size(); j++)
        s1=s1+v1[j];
    for(k=0; k<v2.size(); k++)
        s2=s2+abs(v2[k]);
    if(s1!=s2)
    {
        if(s1>s2)
        {
            cout<<"first"<<endl;
            return 0;
        }
        else
        {
            cout<<"second"<<endl;
            return 0;
        }
    }
    if(s1==s2)
    {
        for(k=0; k<min(v1.size(),v2.size()); k++)
        {
            if(v1[k]>abs(v2[k]))
            {
                cout<<"first"<<endl;
                return 0;
            }
            else if(v1[k]<abs(v2[k]))
            {
                cout<<"second"<<endl;
                return 0;
            }

        }
    }


    if(v3[n-1]>0)
        cout<<"first"<<endl;
    else
        cout<<"second"<<endl;





    return 0;
}

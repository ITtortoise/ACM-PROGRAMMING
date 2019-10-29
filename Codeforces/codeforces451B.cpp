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

ll n,m,k,i,j,t,s,s2,c,x,r,l,e=0,mod,a[sz],MX;
map<ll,ll>_map;
//vector<pair<ll,ll> >v;
vector<ll>v,v1,v2,v3,v4;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v.pb(c);
    }
    v4=v;
    sort(v4.begin(),v4.end());
    if(v4==v)
    {
        cout<<"yes"<<endl<<"1 1";
        return 0;
    }

    for(i=0; i<n; i++)
    {
        if(v[i]<=v[i+1])
            v1.pb(v[i]);

        else
            break;
    }

    for(j=i; j<n; j++)
    {

        if(v[j]>=v[j+1])
            v2.pb(v[j]);
        else
        {
            v2.pb(v[j]);
            break;
        }


    }
    /*for(t=0; t<v2.size(); t++)
        cout<<v2[t]<<" ";*/

    //cout<<i<<" "<<j+1;

    int min1=v1.size()+1;
    int max1=v1.size()+v2.size();
    if(min1==0)
    {
        min1=1;
        max1=v2.size();
    }
    sort(v2.begin(),v2.end());
    for(l=j+1; l<n; l++)
        v3.pb(v[l]);

    v1.insert( v1.end(), v2.begin(), v2.end() );
    v1.insert( v1.end(), v3.begin(), v3.end() );

    sort(v.begin(),v.end());
    if(v==v1)
    {
        cout<<"yes"<<endl;
        cout<<min1<<" "<<max1<<endl;
    }
    else
        cout<<"no"<<endl;




    return 0;
}


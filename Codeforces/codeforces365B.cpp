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

ll n,m,k,i,j,t,r,l,c,sum=0,cnt,x,y,z,rem,mod,a[sz],b[sz],mx=0,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n-2; i++)
    {
        if(a[i]+a[i+1]==a[i+2])
            cnt++;
        else
        {
                v1.pb(cnt);
            //cout<<cnt<<endl;
            cnt=2;
        }


    }
    cnt=2;
    for(j=n-1; j>1; j--)
    {
        if(a[j-2]+a[j-1]==a[j])
            cnt++;
        else
            break;

    }

        v1.pb(cnt);
    //cout<<cnt;
    sort(v1.begin(),v1.end());
    if(n==1)
    {
        cout<<n;
        return 0;
    }

    cout<<v1[v1.size()-1]<<endl;




    return 0;
}


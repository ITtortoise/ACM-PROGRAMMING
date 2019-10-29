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

ll n,m,k,i,j,t,r,l,c,sum=0,cnt1,cnt2,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3,v4,v7;
int main()
{
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.pb(c);
    }
    v7=v1;
    sort(v7.begin(),v7.end());
    mx=v7[n-1];
    mn=v7[0];
    if(mx-mn>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
        if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=0; i<n-1; i++)
    {
        cnt1=1;
        for(j=1; j<=k&&cnt1<=v1[i]; j++)
        {
            cnt1++;
            v2.pb(j);
            if(j==k)
                j=0;


        }
        cnt2=1;
        for(t=1; t<=k&&cnt2<=v1[i+1]; t++)
        {
            cnt2++;
            v3.pb(t);
            if(t==k)
                t=0;

        }
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        for(x=0; x<v2.size(); x++)
            cout<<v2[x]<<" ";
        cout<<endl;
        if(i==n-2)
        {
            for(y=0; y<v3.size(); y++)
                cout<<v3[y]<<" ";
            cout<<endl;
        }

        v2.clear();
        v3.clear();


    }
}






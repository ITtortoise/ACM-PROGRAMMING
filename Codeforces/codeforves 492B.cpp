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

ll n,m,k,i,j,t,s,s2,c,x,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    double max2=0;
    cin>>n>>l;
    for(i=0; i<n; i++)
        cin>>a[i];
        sort(a,a+n);
        x=l-a[n-1];
    double max1=max(a[0],x);
    //cout<<max1;
    for(j=1; j<n-2; j++)
    {
        max2=a[j+1]-a[j];
        max2=max2/2;
        if(max2>max1)
            max1=max2;
    }
    printf("%f",max1);
    cout<<"0000"<<endl;

    return 0;

}


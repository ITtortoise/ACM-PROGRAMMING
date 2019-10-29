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

ll n,m,k,i,j,t1,t2,r,l,c,sum=0,cnt1=0,cnt2=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            cnt1++;
        else if(a[i]<0)
            cnt2++;
    }
    //cout<<cnt1<<" "<<cnt2;
       if((cnt1==1||cnt2==1)||(cnt1==0||cnt2==0))
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;



    return 0;
}


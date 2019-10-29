/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
using namespace std;

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,cnt2=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{

    cin>>n;
    for(m=1; m<=n; m++)
    {
        a[m]=m;
        sum=sum+a[m];
    }
    if(sum%2==0)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
    v1.pb(n);
    for(i=0; ; i++)
    {

       if(n<=0)
            break;
        cnt++;
        if(cnt%2!=0)
        {
            v1.pb(n-3);
            n=n-3;
        }
        else if(cnt%2==0)
        {
            v1.pb(n-1);
            n=n-1;

        }
    }

    for(i=0; i<v1.size(); i++)
            if(v1[i]>0)
                cnt2++;
    cout<<cnt2<<" ";
       for(i=0; i<cnt2; i++)
        cout<<v1[i]<<" ";


    return 0;
}

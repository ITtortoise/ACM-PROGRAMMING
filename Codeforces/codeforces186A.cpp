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

ll n,m,k,i,j,t,sum=0,c,x,r,l1,l2,rem,y,z,mod,a[sz],MX;
string s1,s2,s3,s4;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>s1;
    getchar();
    cin>>s2;
    l1=s1.size();
    l2=s2.size();
    if(abs(l1-l2)>0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(i=0; i<l1; i++)
        if(s1[i]!=s2[i])
        {
            s3+=s1[i];
            s4+=s2[i];
        }

    reverse(s3.begin(),s3.end());
    if(s3==s4&&s3.length()==2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}

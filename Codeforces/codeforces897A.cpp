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

ll n,m,k,i,j,t,s,s2,c,x,r,l,rem,y,z,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    string s1;
    char ch1,ch2;
    cin>>n>>m;
    getchar();
    cin>>s1;
    for(i=1;i<=m;i++)
     {
         cin>>l>>r>>ch1>>ch2;
         for(j=l-1;j<=r-1;j++)
         {
             if(s1[j]==ch1)
                s1[j]=ch2;
         }


     }
     cout<<s1<<endl;






    return 0;
}


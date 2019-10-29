/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define sf(n) scanf("%lld", &n)
#define sff(n,m) scanf("%lld%lld", &n, &m)
#define pf(n) printf("%lld", n)
#define pff(n,m) printf("%lld%lld", n, m)
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define Mod(x, m) ((((x) % (m)) + (m)) % (m))
#define Max3(a, b, c) max(a, max(b, c))
#define Min3(a, b, c) min(a, min(b, c))
#define MAX 100005
#define MIN -1
#define INF 1000000000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,a[MAX];
string s;
map<ll,ll>Mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        Mp[t]++;
    }
    cnt=1;
    for(auto i:Mp)
    {

        //cout<<i.ff<<' ';
        for(j=i.ff; j>0; j--)
        {
            v1.pb(cnt);
            //cout<<cnt;

        }//return 0;
        cnt++;
    }
    //cout<<Mp.size();
    if(Mp.size()==1)
    {
        cout<<"Possible"<<endl;
        for(k=0;k<n;k++)
            cout<<1<<' ';
    }
    else if(v1.size()==n)
    {
        cout<<"Possible"<<endl;
        for(auto i:v1)
            cout<<i<<' ';
    }
    else if(v1.size()>n)
        cout<<"Impossible"<<endl;

    return 0;

}


/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define MAX 101
#define MIN -1
#define INF 10000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define sfi(n) scanf("%lld",&n)
#define sfii(n,m) scanf("%lld%lld",&n,&m)
#define pfi(n) printf("%lld",n)
#define pfii(n,m) scanf("%lld%lld",n,m)
#define pfn   printf("\n")
#define pfs  printf(" ")z


using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn, a[MAX][MAX],mid;
string str,str2;
map<ll,ll>m1;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>n>>m>>v;
    for(i=0; i<n*m; i++)
    {
        cin>>t;
        vec.pb(t);
    }
    sort(all(vec));
    mid=(n*m)/2;
    for(i=0; i<n*m; i++)
    {
        if(abs(vec[i]-vec[mid])%v)
        {
            cout<<-1;
            return 0;
        }
        else
            cnt+=(abs(vec[i]-vec[mid])/v);
    }
    cout<<cnt<<endl;


    return 0;

}


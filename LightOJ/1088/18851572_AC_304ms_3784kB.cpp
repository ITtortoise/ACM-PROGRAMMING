/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG_SHADAF (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define MAX 10000
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

ll n,i,j,L,m,k,t,t1,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn, q,a[MAX],upp_bnd,low_bnd,T;
char ch;
string str,str2;
map<ll,ll>m1;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{

    sfi(t);
    for(T=1; T<=t; T++)
    {

        sfii(n,m);
        for(i=0; i<n; i++)
        {
            sfi(t1);
            vec.pb(t1);
        }
        //sort(all(vec));
        printf("Case %d:\n",T);
        for(i=1;i<=m;i++)
        {
            sfii(l,r);
            upp_bnd=upper_bound(all(vec),r)-vec.begin();
            low_bnd=lower_bound(all(vec),l)-vec.begin();
            pfi(upp_bnd-low_bnd);
            pfn;
        }
        vec.clear();

    }


}

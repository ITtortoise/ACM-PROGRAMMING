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
#define pfs  printf(" ")


using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,data,rem,mod,v,r,l,row,extra,mx,mn,a[MAX],test,pos1,pos2;

double ab,bc,ca,rat;
char ch;
string str,str2;
map<ll,ll>m1;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        ll ans=1;
        scanf("%lld",&n);
        if(n==1)
            printf("0\n");
        else
        {
            for(i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    if(i!=n/i)
                    {
                        ans+=i;
                        ans+=n/i;
                    }
                    else
                        ans+=i;
                }
            }

            printf("%lld\n",ans);
        }
    }

    return 0;

}

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
#define MAX 1000
#define MIN -1
#define INF 1000
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

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mn=1000000009, a[MAX];
double mx=-1.0,differ,hmm,extra1,extra2;
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{

    sfii(n,l);

    for(i=0; i<n; i++)
    {
        cin>>t;
        vec.pb(t);
    }

    sort(all(vec));
    for(i=0; i<vec.size()-1; i++)
    {
        differ=(double)(vec[i+1]-vec[i])/2;
         //printf("%f\n",differ);
        differ=max(differ,mx);
         mx=differ;

    }

    extra1=(l-vec[n-1]);
    extra2=(vec[0]);
    hmm=max(extra1,extra2);
    //cout<<hmm;
    printf("%.10f",max(hmm,differ));


    return 0;

}


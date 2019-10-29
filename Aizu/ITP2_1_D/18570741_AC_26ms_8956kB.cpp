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
#define MAX 100005
#define MIN -1
#define INF 1000000000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define sfi(n) scanf("%lld",&n)
#define sfii(n,m) scanf("%lld%lld",&n,&m)
#define pfi(n) printf("%lld",n)
#define pfn   printf("\n")
#define pfs  printf(" ")
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,val,r,l,row,extra,mx,mn,a[MAX];
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[10005];
/************************************ Code Start Here ******************************************************/
int main()
{
    sfii(n,m);

    for(i=0; i<m; i++)
    {
        sfi(t);
        if(t==0)
        {
            cin>>v>>val;
            v4[v].pb(val);

        }

        else if(t==1)
        {
            sfi(l);
            for(j=0; j<v4[l].size(); j++)
            {
                if(j<v4[l].size()-1)
                    cout<<v4[l][j]<<' ';
                else
                    cout<<v4[l][j];
            }
            cout<<endl;
        }
        else if(t==2)
        {

            sfi(k);
            v4[k].clear();

        }
    }
    /*for(j=0;j<v4[1].size();j++)
       cout<<v4[1][j]<<' ';*/

    return 0;
}







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

ll n,i,j,L,m,k,t,sum,cnt,cnt2,d,rem,mod,v,r,l,row,extra,mx,mn, a[MAX],d1,d2;
char ch;
string str,str2;
map<ll,ll>m1;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>d1>>d2;
            m1[d1]=1;
            m1[d2]=1;

        }
        else if(t==2)
        {
            cin>>d2;
            m1[d2]=1;

        }

    }



    for(i=1; i<n; i++)
    {
        if(m1[i]==0)
        {
            vec.pb(i);
            cnt++;
        }
    }
    //cout<<vec.size()<<endl;
    for(i=0; i<vec.size(); i++)
    {
        if(vec[i+1]-vec[i]==1)
            i++;

      cnt2++;
    }
    cout<<cnt2<<' '<<cnt<<endl;


    return 0;

}

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

ll n,i,j,L,m,k,t,t1,sum,cnt,d,rem,mod,h,v,r,l,row,extra,mx,mn,a[MAX],p;
string s;
map<ll,string>Mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>t1;
    while(t1--)
    {
        memset(a,0,MAX);
        cin>>d>>p;
        for(i=1; i<=d; i++)
        {
            t=i%7;
            if(t==0||t==6)
                a[i]=1;
        }
        for(i=0; i<p; i++)
        {
            cin>>h;
            for(j=h; j<=d; j+=h)
                a[j]=1;
        }

        for(i=1; i<=d; i++)
        {
            mod=i%7;
            if(mod>=1&&mod<=5&&a[i]==1)
            {
                //cout<<i<<' ';
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }

    return 0;

}

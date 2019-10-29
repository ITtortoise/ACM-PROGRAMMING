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

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,a[MAX],h1,m1,h2,m2,minute,hour;
string s;
map<ll,string>Mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    while(cin>>h1>>m1>>h2>>m2)
    {
        hour=0;minute=0;
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        else if(h1<h2&&m1<m2)
        {
            hour=h2-h1;
            minute=m2-m1;
            cout<<(hour*60)+minute<<endl;
        }
        else if(h1>h2&&m1<m2)
        {
            hour=(24-h1)+h2;
            cout<<(hour*60)+m2-m1<<endl;
        }
        else if(h1<h2&&m1>m2)
        {
            hour=(h2-h1);
            cout<<(hour*60)+m2-m1<<endl;

        }
        else if(h1>h2&&m1>m2)
        {
            hour=(24-h1)+h2;
            cout<<(hour*60)+m2-m1<<endl;
        }
        else if(h1==h2&&m1<m2)
        {
            cout<<m2-m1<<endl;
        }
        else if(h1==h2&&m1>m2)
        {
            cout<<(24*60)+m2-m1<<endl;
        }
        else if(h1>h2&&m1==m2)
        {
            cout<<((24-h1)*60)+(h2*60)<<endl;
        }
        else if(h1<h2&&m1==m2)
        {
            cout<<(h2-h1)*60<<endl;
        }
    }

    return 0;

}


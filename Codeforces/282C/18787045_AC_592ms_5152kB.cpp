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

ll n,i,j,L,m,k,t,sum,cnt,cnt2,d,rem,mod,v,r,l,row,extra,mx,mn, a[MAX];
string s,s2,s3,str,str2;
char c1,c2;
map<ll,ll>m1;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>str>>str2;
    if(str.size()!=str2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(i=0; i<str.size(); i++)
    {

        if(str[i]=='1')
            cnt++;
        if(str2[i]=='1')
            cnt2++;

    }
    if((cnt==0&&cnt2>0)||(cnt>0&&cnt2==0))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;

}

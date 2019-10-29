/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define sf(n) scanf("%lld", &n)
#define sff(n,m1) scanf("%lld%lld", &n, &m1)
#define pf(n) printf("%lld", n)
#define pff(n,m1) printf("%lld%lld", n, m1)
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define Mod(x, m1) ((((x) % (m1)) + (m1)) % (m1))
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

ll n,i,j,L,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,a[MAX];
string s;
map<ll,string>m1,m2;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    m1[0]="Happy",m1[1]="birthday",m1[2]="to",m1[3]="you",m1[4]="Happy",m1[5]="birthday",m1[6]="to",m1[7]="you";
    m1[8]="Happy",m1[9]="birthday",m1[10]="to",m1[11]="Rujia",m1[12]="Happy",m1[13]="birthday",m1[14]="to",m1[15]="you";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        m2[i]=s;

    }
    if(n<17)
    {
        for(i=0,j=0; i<16; i++,j++)
        {
           cout<<m2[j%n]<<": "<<m1[i%16]<<endl;
        }
    }
     else if(n>16)
    {
        t=ceil((double)n/16);
        //cout<<t<<endl;
        for(i=0,j=0;i<16*t;i++,j++)
            cout<<m2[j%n]<<": "<<m1[i%16]<<endl;

    }



    return 0;

}


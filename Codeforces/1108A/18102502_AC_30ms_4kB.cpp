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

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,T,t,sum,cnt,rem,mod,v,r,l,row,extra,mx,mn,a,b,c,d;
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        if(a!=c)
            cout<<a<<' '<<c<<endl;
        else if(a!=d)
            cout<<a<<' '<<d<<endl;
        else if(b!=c)
            cout<<b<<' '<<c<<endl;
        else if(b!=d)
            cout<<b<<' '<<d<<endl;
    }

    return 0;

}


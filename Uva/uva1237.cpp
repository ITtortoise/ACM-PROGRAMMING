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
#define sz 100005
#define MIN -1
#define INF 1000000000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,tc,rem,mod,v,v2,q,r,l,row,extra,mx,mn,a,b,c,ab,ac,abc,bc,x,y,val1,val2,val3;
string name;
map<pair<pair<ll,ll>,ll>,string>maap;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{

        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>name>>val1>>val2>>val3;
            maap[mp(mp(-val3,-val2),-val1)]=name;
            // maap.insert(mp(mp(val1,val2),name));
        }

      auto it=maap.begin();

      auto it1=maap.end();
      it1--;
      cout<<it->ss<<endl;
      cout<<it1->ss<<endl;
        maap.clear();
        name.clear();



}

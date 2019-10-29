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

ll n,i,j,L,m,k,t,sum,test,cnt,val1,val2,d,rem,mod,v,v2,r,l,row,extra,mx,mn,c,ab,ac,abc,bc,x,y;
string s;
map<ll,ll>maap;
map<pair<ll,ll>,string>::iterator it;
vector<ll>vec;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>test;
    for(l=1; l<=test; l++)
    {
        ll a[sz],sum=0,b[sz],type,kaiteparbe;
        cin>>type>>kaiteparbe;

        for(j=0; j<type; j++)
        {
            cin>>a[j];
        }
        for(j=0; j<type; j++)
        {
            cin>>b[j];
        }
        ll f=0;
        for(i=0; i<type; i++)
        {

            if(a[i]>b[i])
            {
                f=1;
                break;
            }
            else
            {
                sum+=a[i];
                if(sum>kaiteparbe)
                {

                    f=1;
                    break;
                }
            }

        }
        //cout<<sum<<endl;
        if(f==0)
            cout<<"Case "<<l<<": Yes"<<endl;
        else
            cout<<"Case "<<l<<": No"<<endl;

    }



    return 0;
}

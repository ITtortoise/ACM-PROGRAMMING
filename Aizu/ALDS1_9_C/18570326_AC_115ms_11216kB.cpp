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
#define pfi(n) printf("%lld",n)
#define pfn   printf("\n")
#define pfs  printf(" ")
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,a[MAX];
string str,str2;
map<ll,ll>maap;
set<ll>::iterator it;
set<ll>myset;
vector<ll>v4[51];
priority_queue<ll>myque;
/************************************ Code Start Here ******************************************************/
int main()
{

    while(cin>>str)
    {
        if(str=="insert")
        {
            sfi(t);
            myque.push(t);

        }
        else if(str=="extract")
        {
            pfi(myque.top());pfn;
            myque.pop();
        }
        else if(str=="end")
            return 0;
    }

    return 0;

}

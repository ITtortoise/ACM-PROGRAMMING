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

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,v2,r,l,row,extra,mx,mn,a,b,c,ab,ac,abc,bc,x,y;
string s;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    int i,j,k,l,n,m,count,x;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        m=n;
        l=sqrt(m);
        for(i=1; i<=l; i++)
        {
            count=1;
            for(j=0; j<=i-1; j++)
            {
               x=(i*i*i)-(j*j*j);
               if(x==n)
               {
                   count=0;
                   break;
               }
            }
            if(count==0)
                break;
        }
        if(count==0)
      printf("%d %d\n",i,j);
      else
        printf("No solution\n");
    }

return 0;
}

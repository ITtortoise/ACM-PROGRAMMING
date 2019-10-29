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
#define MAX 106
#define MIN -1
#define INF 1000000000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,rcnt,ccnt,cnt,d,rem,mod,v,r,l,row,col,extra,mx,mn;
string s;
map<ll,string>Mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        long long a[MAX][MAX];
        for(i = 0; i <n; i++)
            for(j = 0; j <n; j++)
                a[i][j] =0;


        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                cin>>a[i][j];
        }
        rcnt=0;
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<n; j++)
                sum=sum+a[i][j];


            if(sum%2!=0)
            {
                rcnt++;
                //dbg;
                row=i+1;
            }
        }
        ccnt=0;
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<n; j++)
                sum=sum+a[j][i];
            //cout<<sum<<' ';

            if(sum%2!=0)
            {
                ccnt++;
                //dbg;
                col=i+1;
            }
        }
        //cout<<ccnt;

        if(rcnt==0 && ccnt==0)
            cout<<"OK"<<endl;
        else if(rcnt==1&& ccnt==1)
            cout<<"Change bit ("<<row<<","<<col<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;
    }

    return 0;

}


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

ll n,i,j,L,m,t,x,sum,sum1,sum2,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,a[MAX],t1,t2;
float dl,dl2;
string s1,s2;
map<char,ll>mp1;
map<char,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/

int summation(ll sum)
{
    if(sum<10)
        return (sum);
    else
    {
        x=sum;
        sum=0;
        while(x>0)
        {
            rem=x%10;
            x=x/10;
            sum+=rem;
        }
        //cout<<sum<<' ';
        summation(sum);
    }
}
int main()
{

    while(getline(cin,s1), getline(cin,s2))
    {
        sum1=0,sum2=0;

        for(ll i=0; i<s1.size(); i++)
        {
            if( isalpha(s1[i]) && isupper(s1[i]) )
                sum1 += s1[i] - 64;
            if( isalpha(s1[i]) && islower(s1[i]) )
                sum1 += s1[i] - 96;
        }
        for(ll i=0; i<s2.size(); i++)
        {
            if( isalpha(s2[i]) && isupper(s2[i]) )
                sum2 += s2[i] - 64;
            if( isalpha(s2[i]) && islower(s2[i]) )
                sum2 += s2[i] - 96;
        }
        t1=0,t2=0;

        t1=summation(sum1);
        t2=summation(sum2);
        //cout<<t2<<' '<<t1<<endl;
        dl=(float)t2/t1;
        dl2=(float)t1/t2;
        //dl=(double)(t2/t1);

        printf("%.2f %%\n",(min(dl,dl2))*100);


    }

   return 0;

}


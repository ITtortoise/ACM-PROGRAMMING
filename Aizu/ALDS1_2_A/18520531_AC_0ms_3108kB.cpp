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

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,a[MAX];
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int bubble_sort(ll A[],ll n)
{
    int round,temp,i;
    for(round=1; round<n; round++)
    {
        for(i=0; i<n-round; i++)
            if(A[i]>A[i+1])
            {
                swap(A[i+1],A[i]);
                cnt++;
            }
    }
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];

        bubble_sort(a,n);
        for(i=0;i<n-1;i++)
           cout<<a[i]<<' ';
           cout<<a[n-1]<<endl;
            cout<<cnt<<endl;

}

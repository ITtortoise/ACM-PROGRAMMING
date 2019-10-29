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

ll n,i,j,L,m,k,t,sum,test,cnt,d,rem,mod,v,v2,r,l,row,extra,mx,mn,a,ans,b,c,ab,ac,abc,bc,x,y;
string s;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    int tc, r, median, x[505], ans;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &r);

		for (int i = 0; i < r; i++) {
			scanf("%d", &x[i]);
		}
		sort(x, x + r);
		median = x[r / 2];

		ans = 0;
		for (int i = 0; i < r; i++) {
			ans += abs(median - x[i]);
		}

		printf("%d\n", ans);
	}



    return 0;
}

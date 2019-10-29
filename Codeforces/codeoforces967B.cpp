#include<bits/stdc++.h>
#define sz 2000000
#define pf printf
#define sc scanf
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define highest_int 2147483647
#define n_INF -99999999
#define mod   100007
#define test_case(t)    for(int z=1;z<=t;z++)
#define print_case      printf("Case %d: ",z)
#define DBG             pf("Hi\n")
#define ms(x,y) (memset((x),(y),sizeof(x)))
#define all(x)   x.begin(),x.end()

using namespace std;
const double pi = 2*acos(0) ;
typedef long long ll ;

vector<pair<ll,ll> >vec;
vector<ll>v1;
map<ll,ll>_map;
map<ll,ll>::iterator it;
queue<ll>_queue;
stack<ll>_stack;
string str,str2;
ll ar[sz], cnt[sz],c,vis[sz], e,n,u,v,s, m, k, i,j,ans,x,y,t,a[sz],b[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v;
        vec.pb(mp(v,i));
    }
    cin>>str;
    sort(all(vec));
    for(i=0; i<vec.size(); i++)
        a[i]=vec[i].ss;

     k=0;
     for(i=0;i<str.size();i++)
     {
         if(str[i]=='0')
         {
             cout<<a[k]<<' ';
             _stack.push(a[k]);
             k++;
         }
         else if(str[i]=='1')
         {
             u=_stack.top();
             cout<<u<<' ';
             _stack.pop();

         }
     }

    return 0;
}


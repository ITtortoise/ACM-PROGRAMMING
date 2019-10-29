#include<bits/stdc++.h>
#define sz 100001
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
#define dbg             pf("Hi\n")
#define ms(x,y) (memset((x),(y),sizeof(x)))
#define all(x)   x.begin(),x.end()

using namespace std;
const double pi = 2*acos(0) ;
typedef long long ll ;

vector<ll>_list[sz];
map<ll,ll>_map;
map<ll,ll>::iterator it;
queue<ll>_queue;
string s1,s2;
ll ar[sz], cnt[sz],cnt1,cnt2,c,vis[sz], i,j,e,n,u,v,s, m, k, ans,x,y,t,t1,a[sz],b[sz];
int main()
{

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>t;
        ar[i]=t;
        t1=t1+t;
        a[i]=t1;
    }
    t=0;
    t1=0;
    j=1;
    for(i=n; i>=1; i--)
    {
        t=ar[i];
        t1=t1+t;
        b[j++]=t1;
    }
    for(i=1,j=1; i<=n&&j<=n; i++,j++)
    {

        if(a[i]<=b[j])
        {
            j--;
            cnt1++;
            //dbg;
            if(cnt1+cnt2==n)
            {
                cout<<cnt1<<' '<<cnt2<<endl;
                return 0;
            }
        }
        else
        {
            i--;
            cnt2++;
            if(cnt1+cnt2==n)
            {
                cout<<cnt1<<' '<<cnt2<<endl;
                return 0;
            }
        }
    }




    return 0;
}

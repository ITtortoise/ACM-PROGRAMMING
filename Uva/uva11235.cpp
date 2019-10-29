#include<bits/stdc++.h>
#define  mx    1001
#define  ll    long long
#define  dbg    cout<<"welldone";
#define  all(x)   x.begin(),x.end()
#define for(i, a, b) for (int i=a; i<=b; i++)
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",value)
using namespace std;

ll n,node,b,e,i,j,tree[mx*3],a[mx];
map<ll,ll>mp;
map<ll,ll>::iterator it;
void init(int node,int b,int e)
{
    if(b==e)
    {
        mp[a[b]]++;
        tree[node]=mp[a[b]];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=max(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return -1;
    if(b>=i&&e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int q1=query(left,b,mid,i,j);
    int q2=query(right,mid+1,e,i,j);
    return max(q1,q2);
}

int main()
{

    sf(n);
   for(i,1,n)
        sf(a[i]);
    init(1,1,n);
   sf(i);
   sf(j);
   pf(query(1,1,n,i,j));

    // main();}
}

